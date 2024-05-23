#include <string.h>
#include <stdio.h>

int main()
{
    char str[100];
    typedef struct car 
    {
        char name[100];
        int speed;
        int cost;
    }car;
    car a;
    a.speed=20;
    printf("%d",a.speed);
    return 0;
}