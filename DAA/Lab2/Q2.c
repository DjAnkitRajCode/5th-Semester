#include <stdio.h>

int gcdAlgo(int a, int b)
{
    int i, c;
    c = a >= b ? b : a;
    for (i = c; i >= 1; i--)
    {
        if (a % i == 0 && b % i == 0)
        {
            return (i);
        }
    }
}

int main()
{
    int a, b, ans;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    ans = gcdAlgo(a, b);
    printf("GCD = %d", ans);
}

