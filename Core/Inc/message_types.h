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
   float  lambda_trgt;
   int	  vehicle_spd;
   int    oil_tmp;
   float    oil_press;
   int    iat;
   int    egt;
   int	  tps;
   float	  batt_v;
} display_values;

typedef struct {
	int    rpm_limit;
	float    rpm1;
	float    rpm2;
	float    rpm3;
	float    rpm4;
	float    rpm5;
	float    rpm6;
	float    rpm7;
	float    rpm8;
	float    rpm9;
	float    rpm10;
	int has_float;
} settings_message;


#ifdef __cplusplus
}
#endif

#endif /* __MESSAGE_TYPES_h */
