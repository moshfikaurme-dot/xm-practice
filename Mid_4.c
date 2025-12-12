/*write a C program to convert specified days into years, weeks and days.
note : ignore leap year
*/
#include<stdio.h>
int main(){
    int r_years, r_weeks, r_days,day;
    printf("enter your value:");
    scanf("%d",&day);
    r_years = day/365;
    printf("year:%d\n",r_years);
    r_weeks=(day% 365)/7;
    printf("weeks:%d\n", r_weeks);
    r_days = day - ((r_years*365)+(r_weeks*7));
    printf("days:%d\n",r_days);

    return 0;

}