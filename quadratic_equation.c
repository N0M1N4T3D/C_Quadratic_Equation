#include "quadratic_equation.h"

// ax^2+bx+c=0
struct solve_equation_answer solve_equation(double a, double b, double c) {
    struct solve_equation_answer solve;
    double D = b * b - 4 * a * c;
    if ((a == 0 && b == 0 && c == 0) || (a == 0 && c == 0)) {
        solve.x1 = 0;
        solve.x2 = 0;
    }
    else if (D < 0) {
        solve.x1 = (-b+sqrt(-D)*I) / (2 * a);
        solve.x2 = (-b-sqrt(-D)*I) / (2 * a);
    }
    else if (D == 0) {
        solve.x1 = -b / (2 * a);
        solve.x2 = -b / (2 * a);
    }
    else {
        solve.x1 = (-b + sqrt(D)) / (2 * a);
        solve.x2 = (-b - sqrt(D)) / (2 * a);
    }
    return solve;
}