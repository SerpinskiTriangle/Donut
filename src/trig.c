#include <trig.h>
#include <math.h>

struct point2D rotatePoint(struct point2D point, double rads){
	return (struct point2D){point.x*cos(rads)-point.y*sin(rads), point.x*sin(rads) + point.y*cos(rads)};

}
