#include "quadratic_equation.h"

int is_equals(double complex a, double complex b, double epsilon) { //Проверка на правильность выполнения функции
    double real_diff = creal(a) - creal(b);
    double imag_diff = cimag(a) - cimag(b);
    return fabs(real_diff) < epsilon && fabs(imag_diff) < epsilon;
}

int main() {
    struct solve_equation_answer result;

    // Тест 1: Решение уравнения x^2 - 4x + 4 = 0 (дискриминант D = 0)
    result = solve_equation(1.0, -4.0, 4.0);
    assert(is_equals(result.x1, 2.0, 0.00001));
    assert(is_equals(result.x2, 2.0, 0.00001));

    // Тест 2: Решение уравнения x^2 + 2x + 1 = 0 (дискриминант D = 0)
    result = solve_equation(1.0, 2.0, 1.0);
    assert(is_equals(result.x1, -1.0, 0.00001));
    assert(is_equals(result.x2, -1.0, 0.00001));

    // Тест 3: Решение уравнения x^2 + 1 = 0 (дискриминант D < 0)
    result = solve_equation(1.0, 0.0, 1.0);
    assert(is_equals(result.x1, 0 + I * 1, 0.00001));
    assert(is_equals(result.x2, 0 - I * 1, 0.00001));

    // Тест 4: Решение уравнения x^2 - 5x + 6 = 0 (дискриминант D > 0)
    result = solve_equation(1.0, -5.0, 6.0);
    assert(is_equals(result.x1, 3.0, 0.00001));
    assert(is_equals(result.x2, 2.0, 0.00001));

    // Тест 5: Решение уравнения x^2 = 0 (дискриминант D = 0)
    result = solve_equation(1.0, 0.0, 0.0);
    assert(is_equals(result.x1, 0.0, 0.00001));
    assert(is_equals(result.x2, 0.0, 0.00001));

    //Тест 6: Решение уравнения 0 * x^2 + 0 * x + 0 = 0 (дискриминант D = 0)
    result = solve_equation(0.0, 0.0, 0.0);
    assert(is_equals(result.x1, 0.0, 0.00001));
    assert(is_equals(result.x2, 0.0, 0.00001));
    printf("All tests passed successfully!\n");

    // Тест 7: Решение уравнения x^2 + 5x + 6 = 0 (дискриминант D > 0)
    result = solve_equation(1.0, 5.0, 6.0);
    assert(is_equals(result.x1, -2.0, 0.00001));
    assert(is_equals(result.x2, -3.0, 0.00001));

    return 0;
}