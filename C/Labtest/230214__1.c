#include <stdio.h>
#include <string.h>


int main()
{
    //Roll:230214
    //name: Saiful Islam reyad
    ///////////////****সার এটা ২য় বার সাবমিট করতেসি প্রশ্ন বোঝার পর****
    int n, i, j, index = 1, c[10000] = {0};
    
    scanf("%d", &n);
    char list[n*2][37], list2[2*n][37];
    int found;
    for (i = 0; i < n; i++)
    {
        found = 0;
        
        char str[2];
        scanf("%s", str);
        scanf("%s", list[i]);
        if (str[0] == 'd')
        {
            printf("DELETED\n");
            if (strcmp(list[i], list2[j]) == 0)
                {
                    strcpy(list2[j],"NUll");
                    c[j]=0;
                    //printf(list2[j]);
                }
        }
        
        else
        {

            for (j = 0; j < index; j++)
            {
                if (strcmp(list[i], list2[j]) == 0)
                {
                    found = 1;
                    break;
                }
            }

            if (found == 1)
            {
                c[j]++;
                printf("%s%d\n", list2[j], c[j]);
            }
            else
            {
                printf("OK\n");
                index+=2;
                strcpy(list2[j], list[i]);
                strcpy(list2[j+1], list2[j]);
                
                strcat(list2[j+1],"1");
                j++;
                
            }
        }
    
    }
    f

    return 0;
}