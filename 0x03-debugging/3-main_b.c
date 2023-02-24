#include "main.h"
#include <stdio.h>

int main(void)
{
int month;
int day;
int year;

month = 2;
day = 29;
year = 2000;

if (convert(month, day, year))
{
printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
}
else
{
printf("Day of the year: %d\n", day_of_year(month, day, year));
printf("Remaining days: %d\n", remaining_days(month, day, year));
}

return (0);
}
