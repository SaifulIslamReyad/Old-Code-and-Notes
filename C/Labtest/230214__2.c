// #include <stdio.h>

// int main()
// {
//     int arr[2];
//     int brr[2];
//     int crr[4];
//     int a, b, c, n, m, o;
//     char x;
//     int cc = 0, f = 0;
//     // char null[4];
//     scanf("%d", &a);
//     scanf("%c", &x);
//     scanf("%d", &b);
//     scanf("%c", &x);
//     scanf("%d", &c);
//     // scanf("%s",null);
//     scanf("%d", &n);
//     scanf("%c", &x);
//     scanf("%d", &m);
//     scanf("%c", &x);
//     scanf("%d", &o);
//     // printf("%d",o);
//     arr[0] = a / 10;
//     arr[1] = a % 10;
//     brr[0] = b / 10;
//     brr[1] = b % 10;
//     crr[0] = c / 1000;
//     crr[1] = (c % 1000) / 100;
//     crr[2] = (c % 100) / 10;
//     crr[3] = (c % 10);
//     //printf("%d%d%d%d\n", crr[0], crr[1], crr[2], crr[3]);

//     while (a <= n)
//     {
//         f = 0;
//         if (arr[0] == crr[3])
//         {
//             f++;
//         }
//         if (arr[1] == crr[2])
//         {
//             f++;
//         }
//         if (brr[0] == crr[1])
//         {
//             f++;
//         }
//         if (brr[1] == crr[0])
//         {
//             f++;
//         }
//         if (f == 4)
//         {
//             cc++;
//         }
//         a++;

//         arr[0] = a / 10;
//         arr[1] = a % 10;
//         printf("a=%d%d,b=%d%d,c=%d%d%d%D\n", arr[0], arr[1], brr[0], brr[1], crr[0], crr[1], crr[2], crr[3]);
//     }
//     b++;

//     brr[0] = b / 10;
//     brr[1] = b % 10;

//     a = 1;
//     arr[0] = a / 10;
//     arr[1] = a % 10;

//     while (b <= m)
//     {
//         while (a <= 30)
//         {
//             f = 0;
//             if (arr[0] == crr[3])
//             {
//                 f++;
//             }
//             if (arr[1] == crr[2])
//             {
//                 f++;
//             }
//             if (brr[0] == crr[1])
//             {
//                 f++;
//             }
//             if (brr[1] == crr[0])
//             {
//                 f++;
//             }
//             if (f == 4)
//             {
//                 cc++;
//             }
//             a++;

//             arr[0] = a / 10;
//             arr[1] = a % 10;
//              printf("a=%d%d,b=%d%d,c=%d%d%d%d\n", arr[0], arr[1], brr[0], brr[1], crr[0], crr[1], crr[2], crr[3]);
//         }
//         a = 1;
//         arr[0] = a / 10;
//         arr[1] = a % 10;
//         b++;
//         brr[0] = b / 10;
//         brr[1] = b % 10;
//     }
//     c++;
//     crr[0] = c / 1000;
//     crr[1] = (c % 1000) / 100;
//     crr[2] = (c % 100) / 10;
//     crr[3] = (c % 10);

//     b = 1;
//     brr[0] = b / 10;
//     brr[1] = b % 10;

//     a = 1;
//     arr[0] = a / 10;
//     arr[1] = a % 10;
//     while (c <= o)
//     {
//         while (b <= 12)
//         {
//             while (a <= 30)
//             {
//                 f = 0;
//                 if (arr[0] == crr[3])
//                 {
//                     f++;
//                 }
//                 if (arr[1] == crr[2])
//                 {
//                     f++;
//                 }
//                 if (brr[0] == crr[1])
//                 {
//                     f++;
//                 }
//                 if (brr[1] == crr[0])
//                 {
//                     f++;
//                 }
//                 if (f == 4)
//                 {
//                     cc++;
//                 }
//                 a++;

//                 arr[0] = a / 10;
//                 arr[1] = a % 10;
//                 printf("a=%d%d,b=%d%d,c=%d%d%d%d\n", arr[0], arr[1], brr[0], brr[1], crr[0], crr[1], crr[2], crr[3]);
//             }
//             a = 1;
//             arr[0] = a / 10;
//             arr[1] = a % 10;
//             b++;
//             brr[0] = b / 10;
//             brr[1] = b % 10;
//         }
//     }

//     printf("%d\n", cc);

//     return 0;
// }
#include <stdio.h>

int main()
{
      
    int a, b, c, n, m, o;
    char x;
    int f=0;
    
    // char null[4];
    scanf("%d", &a);
    scanf("%c", &x);
    scanf("%d", &b);
    scanf("%c", &x);
    scanf("%d", &c);
    
    scanf("%d", &n);
    scanf("%c", &x);
    scanf("%d", &m);
    scanf("%c", &x);
    scanf("%d", &o);

    int z=c%100;
    int y= z%10;
    y*=10;
    y+=z/10;
    printf("%d",y);
    for(int i=y;i<=o%100;i++)
    {
        if (y<=28 && y>=1)
        {
            f++;
        }
        
    }
    

    return 0;
}