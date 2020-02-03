#ifndef _TEST_
#define _TEST_

#include <stdio.h>
#include <stdlib.h>

struct test
{
    double real;
    double img;
};

void add(struct test *, struct test *, struct test *);
void sub(struct test *, struct test *, struct test *);
void mul(struct test *, struct test *, struct test *);
void divide(struct test *, struct test *, struct test *);

#endif

