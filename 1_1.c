#include <stdio.h>
void blank(int n);
int main()
{
    int i;
    scanf("%d", &i);
    if (0 < i && i < 10)
    {
        for (int x = 1; x <= i; x++)
        {
            blank(i - x);
            for (int j = 0; j < x; j++)
            {
                printf("%d", x);
                blank(1);
            }
            printf("\n");
        }
        for (int x = i - 1; x > 0; x--)
        {
            blank(i - x);
            for (int j = 0; j < x; j++)
            {
                printf("%d", x);
                blank(1);
            }
            printf("\n");
        }
    }
    else
    {
        printf("N/A");
    }
    return 0;
}
void blank(int n)
{
    for (int a = 0; a < n; a++)
    {
        printf(" ");
    }
}
