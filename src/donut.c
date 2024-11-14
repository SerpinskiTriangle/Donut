#include "donut.h"
#include "trig.h"
#include <math.h>
#include <assert.h>
#include <stdlib.h>

//ring points are the cross section of the torus when the plane of intersection contains the y axis

void initDntPts(struct point2D *ptArr, unsigned int ringPtCount, unsigned int rotatePtCount){
	ptArr = (struct point2D *)calloc(ringPtCount*rotatePtCount, sizeof(struct point2D));
	assert(ptArr);
	return;
}

struct point2D genRingPt(double rads){
    return (struct point2D){cos(rads)*dntInternRadius + dntExternRadius,sin(rads)*dntInternRadius};
}

struct point2D genDntPt(double ringRad, double dntRad){
	return rotatePoint(genRingPt(ringRad), dntRad);
}