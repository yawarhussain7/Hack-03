/*
Author: Yawar Hussain
                ************** Program introduction ***********************
This program calculate the user data package if there data is almost finished , data is completely finished or near to finished 
it inform the user 
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{

    double totalGB, total_used, averageDailyUse,Max_Use,Remaning_GB;
    int currentDay, Remaning_Days;
    
    printf("Number of GB in the plan per 30 day period : ");
    scanf("%lf", &totalGB);
    printf("The current day in the 30 day period (in the range 1, first day, 30 for the last day) : ");
    scanf("%d", &currentDay);
    printf("The total number of GB used so far : ");
    scanf("%lf", &total_used);

    Remaning_Days = 30 - currentDay;
    Remaning_GB = totalGB - total_used;
    averageDailyUse = total_used / currentDay;
    Max_Use = totalGB / 30 ;

    printf("%d days used, %d days remaining\n", currentDay, Remaning_Days);
    printf("Average daily use: %.3lf GB/day\n", averageDailyUse);

    if(averageDailyUse > Max_Use)
    {
         printf("You are EXCEEDING your average daily use (%.3lf GB/day).\n", Max_Use);
        double suggestion = (averageDailyUse - Max_Use) * 30;
        printf("Continuing this high usage, you'll exceed your data plan by %.1lf GB.\n",suggestion);
    }
    
    else if (averageDailyUse < Max_Use)
    {
        printf("You are at or below your average daily use (%.3lf GB/day).\n", Max_Use);
        double ExtraUse = (totalGB - total_used) / Remaning_Days;
        printf("You can use up to %.3lf GB/day and stay below your data plan limit\n", ExtraUse);
    }
    
    return 0;
}
