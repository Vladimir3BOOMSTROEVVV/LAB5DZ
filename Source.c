#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES
#include <math.h>

void main()
{
    system("chcp 1251");
    double x, y, z;
    puts("Введите значение x");
    scanf("%lf", &x);
    puts("Введите значение y");
    scanf("%lf", &y);
    puts("Введите значение z");
    scanf("%lf", &z);
    double v1, v2, v3, v4, v;
    
    v1 = 1 + pow(sin(x + y), 2);
    v2 = fabs(x - (2 * y) / (1 + pow(x, 2) * pow(y, 2)));
    v3 = pow(x, fabs(y));
    v4 = pow(cos(atan(1 / z)), 2);
    v = v1 / v2 * v3 + v4;
    printf("Ответ: %.4lf\n", v);
    return 0;
}
