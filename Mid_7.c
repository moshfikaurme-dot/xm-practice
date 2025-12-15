/* 7. Write a C program that accepts two items' weight and number of purchases (floating point values) and calculates their average value.
*/

#include <stdio.h>

int main() {
    float weight1, weight2, purchases1, purchases2, average;

    printf("Enter the weight of item 1: ");
    scanf("%f", &weight1);

    printf("Enter the number of purchases for item 1: ");
    scanf("%f", &purchases1);

    printf("Enter the weight of item 2: ");
    scanf("%f", &weight2);

    printf("Enter the number of purchases for item 2: ");
    scanf("%f", &purchases2);

    average = (weight1 + weight2) / (purchases1 + purchases2);

    printf("The average value is: %.2f\n", average);

    return 0;
}