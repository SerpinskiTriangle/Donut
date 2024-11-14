#ifndef DONUT_H
#define DONUT_H
#include <trig.h>
extern double dntInternRadius = 1;
extern double dntExternRadius = 2;
extern struct point2D* dntPts;

void initDntPts(struct point2D *ptArr, unsigned int ringPtCount, unsigned int rotatePtCount); //idk what torus geometry naming conventions say the names of these should be
struct point2D genRingPt(double rads);
void genDntPts();
#endif
