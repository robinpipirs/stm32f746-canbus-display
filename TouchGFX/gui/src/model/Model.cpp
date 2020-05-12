#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>

#include "FreeRTOS.h"
#include "queue.h"
#include "task.h"

typedef struct {
   int    rpm;
   int    clt;
   int    map;
   float  lambda;
   float  lambda_trgt;
   int	  vehicle_spd;
   int    oil_tmp;
   int    oil_press;
   int    iat;
   int    egt;
   int	  tps;
   float	  batt_v;
} display_values;

uint8_t values[sizeof(display_values)];

extern "C"
{
	xQueueHandle messageQ;
}

Model::Model() : modelListener(0)
{
	messageQ = xQueueGenericCreate(1, sizeof(display_values), 0);
}

void Model::tick()
{
	if(xQueueReceive(messageQ, &values , 0) == pdTRUE)
	{
		modelListener->setNewValue(values);

		// something to update
	}
}
