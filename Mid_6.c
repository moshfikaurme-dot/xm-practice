/*write a c program that accepta two integers from the user and claculates the product of the two integers
*/

#include<stdio.h>
int main (){
    int num1, num2, product;
    printf("enter any two integer:\n");

    scanf("%d%d",&num1, &num2);
    product = num1 * num2;
    printf("product is : %d",product);
    return 0;
}