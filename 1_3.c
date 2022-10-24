#include <stdio.h>
#define Pi 3.14
int main()
{
    double r1, r2, r3, h, v;
    scanf("%lf", &r1);
    scanf("%lf", &r2);
    scanf("%lf", &r3);
    scanf("%lf", &h);
    printf("%.5f\n%.5f\n", 2 * Pi * r1, Pi * r1 * r1);
    printf("%.5f\n%.5f\n", 4 * Pi * r2 * r2, 4 * Pi * r2 * r2 * r2 / 3);
    printf("%.5f\n", Pi * r3 * r3 * h);
}