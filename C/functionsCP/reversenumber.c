#include <stdio.h>
int reverseNumber(int n)
{
    int t = 0, d = 0;
    while (n)
    {
        d = n % 10;
        t = (t * 10) + d;
        n /= 10;
    }

    return t;
}
int main()
{

    int n;
    n=reverseNumber(924912);
    printf("%d",n);
    return 0;
}
