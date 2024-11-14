#include <trig.h>
#include <math.h>

struct point2D rotatePoint(double x, double y, double rads){
	return (struct point2D){x*cos(rads)-y*sin(rads), x*sin(rads) + y*cos(rads)};
}
