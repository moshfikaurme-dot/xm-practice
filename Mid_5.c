/*write a C progam that accepts two integers from the user and c alculates the sum of the two integers
*/

#include<stdio.h>
int main(){
    int num1, num2, num3,sum;
    printf("enter any two integer:\n");

    scanf("%d%d",&num1, &num2);
    sum = num1 + num2;
    printf("sum is : %d",sum);
    return 0;

}