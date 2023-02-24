#include <stdio.h>
#include "main.h"

/**
 * print_remaining_days - Takes a date and prints how many days are left
 * in the year, taking leap years into account
 *
 * @month: Month in number format
 * @day:   Day of month
 * @year:  Year
 *
 * Return: void
 */
void print_remaining_days(int month, int day, int year)
{
int days_in_feb = 28;
int is_leap_year = 0;

if (year % 4 == 0)
{
if (year % 100 == 0)
{
if (year % 400 == 0)
{
is_leap_year = 1;
}
}
else
{
is_leap_year = 1;
}
}

if (is_leap_year)
{
days_in_feb = 29;
}

if (month < 1 || month > 12)
{
printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
return;
}

if (day < 1 || day > 31)
{
printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
return;
}

if (month == 2 && day > days_in_feb)
{
printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
return;
}

day = convert_day(month, day);

printf("Day of the year: %d\n", day);

if (is_leap_year)
{
printf("Remaining days: %d\n", 366 - day);
}
else
{
printf("Remaining days: %d\n", 365 - day);
}
}
