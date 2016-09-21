#ifndef VECTOR_H_
#define VECTOR_H_

typedef struct {
	float * elements;
	int size;
} Vector;

Vector * addVects(Vector * base, Vector * add);

double magnitude(Vector * vect);

double dotProduct(Vector * base, Vector * add);

Vector * vectProject(Vector * base, Vector * vect1);


#endif
