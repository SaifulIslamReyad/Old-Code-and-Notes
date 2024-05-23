#include <string.h>
#include <stdio.h>

int main()
{
    char str[100];
    struct car 
    {
        char name[100];
        int speed;
        int cost;
    }arr[3];
    for (int i=0;i<3;i++) 
    {
        
        scanf("%s",str);
        strcpy(arr[i].name, str);
        scanf("%d%d",&arr[i].speed,&arr[i].cost);
        
    }
    
     for (int i=0;i<3;i++) 
    {
        
        printf("Name %s\n",arr[i].name);
        
        printf("speed %d\n cost %d\n",arr[i].speed,arr[i].cost);
        
    }
    
    return 0;
}