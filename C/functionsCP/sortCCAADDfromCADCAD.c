#include <stdio.h>
#include <string.h>
int getindex(char x, char xx[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (x == xx[i])
        {
            return i;
        }
    }
}

int main()
{
    
    int n;
    scanf("%d", &n);
    char str[n + 1];
    scanf("%s", str);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = getindex(str[i], str, n);
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    char reyad[n + 1];
    for (int i = 0; i < n; i++)
    {
        reyad[i] = str[arr[i]];
    }
    reyad[n] = '\0';

    return 0;
}