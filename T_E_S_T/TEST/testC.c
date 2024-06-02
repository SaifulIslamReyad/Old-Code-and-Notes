#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int n, count = 0;
        scanf("%d", &n);

        int arr1[n];
        int arr2[n];

        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr1[j]);
        }

        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr2[j]);
        }

        int i = 0;
        int j = 0;
        int x = n;
        while (1)

        {
            if (i == x)
                break;
            if (arr1[i] > arr2[j])
            {
                j++;

                count++;
                x--;
                // printf("x%d", x);
                // printf("ccount%d",count);
            }
            else
            {
                i++;
                j++;
                // printf("i%dj%d", i, j);
            }
            if (i == x)
                break;
        }

        printf("%d\n", count);
    }

    return 0;
}