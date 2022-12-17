/* write a c program to print the given days in years months and days format */

#include<stdio.h>
int main()
{
    int d,years,months,days;
    printf("Enter the number of days to be converted into YMD format ");
    scanf("%d",&d);
    years = d/365;
    months = (d/30)-(years*12);
    days = d-((years*365)+(months*30));
    printf("Years = %d\n",years);
    printf("Months = %d\n",months);
    printf("Days = %d\n",days);
    return 0;
}