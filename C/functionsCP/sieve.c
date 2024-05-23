#include <stdio.h>

int main()
{
    int prime[1000000] = {0};
    prime[0] = 1;
    prime[1] = 1;

    for (int i = 2; i * i <= 1000000; i++)
    {
        if (prime[i] == 0)
        {
            for (int j = i * i; j <= 1000000; j += i)
            {
                prime[j] = 1;
            }
        }
    }

    return 0;
}