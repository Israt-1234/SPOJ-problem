#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int odd_even()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    int even = 0, odd = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
            even++;
        else
            odd++;
    }
    printf("%d %d", even, odd);
}
int main()
{

    odd_even();

    return 0;
}
