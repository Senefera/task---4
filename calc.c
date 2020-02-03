#include "calcom.h"


void add(struct test *a, struct test *b, struct test *c){
	c->real = a->real + b->real;
	c->img = a->img + b->img;
}

void sub(struct test *a, struct test *b, struct test *c){
	c->real = a->real - b->real;
	c->img = a->img - b->img;
}

void mult(struct test *a, struct test *b, struct test *c){
	c->real = a->real * b->real - a->img * b->img;
    c->img = a->real * b->img + a->img * b->real;
}

void divide(struct test *a, struct test *b, struct test *c){
	c->real = (a->real * b->real + a->img * b->img) / (b->real * b->real + b->img * b->img);
    c->img = (b->real * a->img - b->img * a->real) / (b->real * b->real + b->img * b->img);
}
 
