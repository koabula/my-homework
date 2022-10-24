#include <stdio.h>
#include <math.h>
#include <float.h>
int main()
{
    double f, pi1, pi2 = 0, k;
    int i = 0;
    scanf("%Lf", &f);
    for (k = 0; 1 == 1; k++)
    {
        pi1 = pi2;
        pi2 = pi2 + ((4 / (8 * k + 1)) - (2 / (8 * k + 4)) - (1 / (8 * k + 5)) - (1 / (8 * k + 6))) / pow(16, k);
        i++;
        if (pi2 - pi1 < f)
        {
            printf("%d", i - 1);
            break;
        }
    }
}