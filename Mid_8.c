/* 8. Write a C program that accepts an employee's ID, total worked hours in a month,
and the amount he received per hour. Print the ID and salary
(with two decimal places) of the employee for a particular month.*/

#include<stdio.h>
int main()
{long long int id;
float hour,amount,salary;
    printf("enter your id:");
    scanf("%lld",&id);

    printf("total worked hours in this month:");
    scanf("%f",&hour);

    printf("amount you received per hour:");
    scanf("%f",&amount);

    printf("ID:%lld\nsalary:%.2f only", id, salary = hour*amount );
    return 0;


}