#ifndef GPS_H
#define GPS_H

typedef struct
{
    _Bool vaild;
    f32 lat;
    f32 lon;
} geographic_point;

void gps_init();

geographic_point get_geographic_point();

#endif