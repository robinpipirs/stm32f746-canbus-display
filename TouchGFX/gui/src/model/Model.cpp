#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>
#include <message_types.h>

#include "FreeRTOS.h"
#include "queue.h"
#include "task.h"

uint8_t values[sizeof(display_values)];
uint8_t settings_value[sizeof(settings_message)];

extern "C"
{
	xQueueHandle messageQ;
	xQueueHandle settingsMessageQ;
}

Model::Model() : modelListener(0)
{
	messageQ = xQueueGenericCreate(1, sizeof(display_values), 0);
	settingsMessageQ = xQueueGenericCreate(1, sizeof(settings_message), 0);
}

void Model::tick()
{
	if(xQueueReceive(messageQ, &values , 0) == pdTRUE)
	{
		modelListener->setNewValue(values);
	}

	if(xQueueReceive(settingsMessageQ, &settings_value , 0) == pdTRUE)
	{
		modelListener->updateDisplaySettings(settings_value);
	}
}
