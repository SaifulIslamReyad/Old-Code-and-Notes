#include <stdio.h>

int isLeapYear(int year)
{
    if (year % 400 == 0)
        return 1;
    if (year % 100 == 0)
        return 0;
    if (year % 4 == 0)
        return 1;
    return 0;
}

int reverse(int num)
{
    int rev = 0;
    while (num > 0)
    {
        rev = rev * 10 + num % 10;
        num /= 10;
    }
    return rev;
}

int isDatePalindrome(int day, int month, int year)
{
    int num = year * 10000 + month * 100 + day;
    int reversedNum = reverse(num);
    return num == reversedNum;
}

int main()
{
    char x;
    int start_day, start_month, start_year;
    int end_day, end_month, end_year;
    int palindromic_count = 0;

    scanf("%d%c%d%c%d", &start_day, &x, &start_month, &x, &start_year);
    scanf("%d%c%d%c%d", &end_day, &x, &end_month, &x, &end_year);

    for (int year = start_year; year <= end_year; year++)
    {
        for (int month = (year == start_year ? start_month : 1); month <= (year == end_year ? end_month : 12); month++)
        {
            int max_day = 31;
            if (month == 4 || month == 6 || month == 9 || month == 11)
                max_day = 30;
            else if (month == 2)
            {
                if (isLeapYear(year))
                    max_day = 29;
                else
                    max_day = 28;
            }
            for (int day = (year == start_year && month == start_month ? start_day : 1); day <= (year == end_year && month == end_month ? end_day : max_day); day++)
            {
                if (isDatePalindrome(day, month, year))
                {
                    palindromic_count++;
                }
            }
        }
    }

    printf("%d\n", palindromic_count);

    return 0;
}
