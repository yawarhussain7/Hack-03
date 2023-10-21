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
    
    printf("Number of GB in the plan per 30 day period \n");
    scanf("%lf", &totalGB);
    printf("The current day in the 30 day period (in the range 1, first day, 30 for the last day)\n");
    scanf("%d", &currentDay);
    printf("The total number of GB used so far\n");
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
        
    }
    return 0;
}
