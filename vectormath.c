#include "vectormath.h"
#include <math.h>
#include <stdlib.h>

Vector * addVects(Vector * base, Vector * add) {
	Vector * rval = malloc(sizeof(Vector));

	int vectDim = base->size;
	
	rval->size = vectDim;
	rval->elements = malloc(vectDim * sizeof(double));

	for(int i = 0; i<vectDim; i++){
		rval->elements[i] = base->elements[i] + add->elements[i];
	}

	return rval;
}

Vector * scalarMult(double scalar, Vector * vect) {
	Vector * rval = malloc(sizeof(Vector));

	int vectDim = vect -> size;
	rval -> size = vectDim;

	rval -> elements = malloc(vectDim * sizeof(double));

	for(int i = 0; i < vectDim; i++){
		rval -> elements[i] = vect -> elements[i] * scalar;
	}

	return rval;
}



double magnitude(Vector * vect) {
	double sumOfSquares = 0;
	int vectDim = vect->size;

	for(int i = 0; i < vectDim; i++){
		double val = vect->elements[i];
		sumOfSquares += val*val;
	}
	return sqrt(sumOfSquares);
}



double dotProduct(Vector * vect1, Vector * vect2) {
	int vectDim = vect1 -> size;
	double dotProd = 0;
	
	for(int i = 0; i<vectDim; i++){
		dotProd += vect1->elements[i] + vect2->elements[i];
	}

	return dotProd;
}

Vector * vectProject(Vector * base, Vector * vect1) {
	int vectDim = base -> size;
	
	double numerator = dotProduct(base, vect1);
	double denomenator = dotProduct(base, base);
	
	return scalarMult(numerator/denomenator, base);	
}
