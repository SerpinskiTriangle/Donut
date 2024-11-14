#include "donut.h"
#include "trig.h"
#include <math.h>
#include <assert.h>
#include <stdlib.h>



void initDntPts(struct point2D *ptArr, unsigned int ringPtCount, unsigned int rotatePtCount){
	ptArr = (struct point2D *)calloc(ringPtCount*rotatePtCount, sizeof(struct point2D));
	assert(ptArr);
}

struct point2D genRingPt(double rads){
        return (struct point2D){cos(rads)*dntInternRadius + dntExternRadius,
sin(rads)*dntInternRadius};
}

