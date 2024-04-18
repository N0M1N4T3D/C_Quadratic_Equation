#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <complex.h>
#include <assert.h>

struct solve_equation_answer solve_equation(double a, double b, double c);

struct solve_equation_answer {
    double complex x1, x2;
};

void test_solve_equation();

int is_equals(double complex a, double complex b, double epsilon);

#pragma once