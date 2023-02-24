#include <stdio.h>
#include "main.h"

/**
 * print_remaining_days - Takes a date and prints how many days are left
 *in the year, taking leap years into account
 *
 * @month: Month in number format
 * @day:   Day of month
 * @year:  Year
 *
 * Return: void
 */
void print_remaining_days(int month, int day, int year)
{
/* Check if year is a leap year */
if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
{
/* If it is a leap year, February has 29 days */
if (month >= 3)
{
day++;
}

/* Print day of the year and remaining days */
printf("Day of the year: %d\n", day);
printf("Remaining days: %d\n", 366 - day);
}
else
{
/* If it is not a leap year, February has 28 days */
/* Check if input date is valid */
if (month == 2 && day == 29)
{
printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
}
else
{
/* Print day of the year and remaining days */
printf("Day of the year: %d\n", day);
printf("Remaining days: %d\n", 365 - day);
}
}
}
