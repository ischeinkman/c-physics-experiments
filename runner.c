#include "vectormath.h"

#include <stdlib.h>
#include <stdio.h>

#define DIM 3

int main(int argc, char ** argv){
	
	Vector * a = malloc(sizeof(Vector));
	a->size = DIM;
	a->elements = malloc(DIM * sizeof(double));

	a->elements[0] = 1;
	a->elements[1] = 0;
	a->elements[2] = 0;

	
	Vector * b = malloc(sizeof(Vector));
	b->size = DIM;
	b->elements = malloc(DIM * sizeof(double));

	b->elements[0] = 0;
	b->elements[1] = 1;
	b->elements[2] = 0;

	printf("Mag a: %f\n", magnitude(a));
	printf("a * b: %f\n", dotProduct(a,b));
}
