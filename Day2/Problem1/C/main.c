// Write and execute a C program that calculates and displays the number of minutes in a year.

#include <stdio.h>

#define DAYS_IN_YEAR 365
#define HOURS_IN_DAY  24
#define MINUTES_IN_HOUR 60

int CalculateMinutes(int days, int hourInDay, int minutesPerHour);

 
int main() {
    int totalMinutesInYear = CalculateMinutes(DAYS_IN_YEAR, HOURS_IN_DAY, MINUTES_IN_HOUR);

    printf("Minutes in one year are %d.\n", totalMinutesInYear);
    return 0;
}


int CalculateMinutes (int days_in_year, int hours_in_day, int mintutes_in_hour) {
    int hoursInYear = days_in_year * hours_in_day;
    int minutesInYear = hoursInYear * mintutes_in_hour;

    return minutesInYear;
}