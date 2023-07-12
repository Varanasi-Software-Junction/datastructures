#include <stdio.h>

int main()
{
    int a, b, c, max;
    printf("Enter a,b and c\n");
    scanf("%d%d%d", &a, &b, &c);
    // Nested if else

    if (a > b)
    {
        if (a > c)
        {
            max = a;
        }
        else
        {
            max = c;
        }
    }
    else
    {
        if (b > c)
        {
            max = b;
        }
        else
        {
            max = c;
        }
    }
    printf("Max=%d\n", max);

    // If else ladder

    if (a > b && a > c)
    {

        max = a;
    }
    else

        if (b > c)
    {
        max = b;
    }
    else
    {
        max = c;
    }

    printf("Max=%d\n", max);

    // If else ladder

    if (a < b || a < c)
    {
        if (b < c)
        {
            max = c;
        }
        else
        {
            max = b;
        }
    }
    else

    {
        max = a;
    }

    printf("Max=%d\n", max);

    max = a;
    if (b > max)
        max = b;
    if (c > max)
        max = c;
    printf("Max=%d\n", max);

    return 0;
}
