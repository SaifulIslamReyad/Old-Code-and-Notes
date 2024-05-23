#include <stdio.h>

int gcd(int a, int b)
{
    int x=a,y=b;
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return x*y/a;
}

int main()
{
    int num1 = 36;
    int num2 = 48;
    printf("%d\n", gcd(num1, num2));
    return 0;
}
