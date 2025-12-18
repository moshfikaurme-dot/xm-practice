//Write a C program that reads 5 numbers and sums all odd values between them/

#include <stdio.h>
int main()
{
    int number[5];
    int sum = 0;

    int i=0;
    while (i<5){

        scanf("%d",&number[i]);



         if(number[i]%2 !=0)
         {
             sum+=number[i];

         }
i++;
    }
printf("sum = %d",sum);

return 0;

}