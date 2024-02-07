// pre-processor directives

// include C header files
#include <stdio.h>
#include <math.h>

// declare global variables
// we will be storing their addresses in pointers
static double radius;
static double theta;

// function declaration
void cartesianToPolar(double, double, double *, double *);