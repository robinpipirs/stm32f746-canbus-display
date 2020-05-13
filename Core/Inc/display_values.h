#ifndef __DISPLAY_VALUES_H
#define __DISPLAY_VALUES_H

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


#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
