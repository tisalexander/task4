#include <stdio.h>
#include "functions.h"

int main()
{
    float radius = 0.0f;

    printf("Введите радиус окружности: ");
    scanf("%f", &radius);

    printf("Введено значение %.2f\n", radius);
    printf("Длина окружности: %.2f\n", circumference(radius));
    printf("Площадь круга: %.2f\n", circleArea(radius));

    return 0;
}
