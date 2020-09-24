#ifndef __MESSAGE_TYPES_H
#define __MESSAGE_TYPES_H

#ifdef __cplusplus
extern "C" {
#endif

typedef struct {
   int    rpm;
   int    clt;
   int    map;
   float  lambda;
   float  lambdaTarget;
   int	  vehicleSpeed;
   int    oilTemp;
   float  oilPressure;
   float  fuelPressure;
   int    iat;
   int    egt;
   int	  tps;
   float  battVoltage;
} display_values;

typedef struct {
	int    rpmLimit;
	int    rpm1;
	int    rpm2;
	int    rpm3;
	int    rpm4;
	int    rpm5;
	int    rpm6;
	int    rpm7;
	int    rpm8;
	int    hasFloat;
} settings_message;


#ifdef __cplusplus
}
#endif

#endif /* __MESSAGE_TYPES_h */
