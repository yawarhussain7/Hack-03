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

    double totalGB, total_used, averageDailyUse,Max_Use;
    int currentDay, Remaning_Days;
    
    printf("Number of GB in the plan per 30 day period \n");
    scanf("%lf", &totalGB);
    printf("The current day in the 30 day period (in the range 1, first day, 30 for the last day)\n");
    scanf("%d", &currentDay);
    printf("The total number of GB used so far\n");
    scanf("%lf", &total_used);

    return 0;
}
