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
	int    rpm1;
	int    rpm2;
	int    rpm3;
	int    rpm4;
	int    rpm5;
	int    rpm6;
	int    rpm7;
	int    rpm8;
	int has_float;
} settings_message;


#ifdef __cplusplus
}
#endif

#endif /* __MESSAGE_TYPES_h */
