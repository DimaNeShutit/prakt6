#include <stdio.h>
#include <math.h>
void main() 
{
    double x, y;
    printf("input point coordinates (x y): ");
    scanf_s("%lf %lf", &x, &y);
    if (x * x + y * y <= 4 && x >= 0 && y >= 0 && y >= x) {
        printf("Point (%.2f, %.2f) is in area\n", x, y);
    }
    else {
        printf("Point (%.2f, %.2f) is not in area\n", x, y);
    }
}