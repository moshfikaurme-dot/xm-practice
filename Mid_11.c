/* 2. Write a C program that reads three floating-point values and checks if it is possible to make a triangle with them.
 Determine the perimeter of the triangle if the given values are valid.
*/
#include <stdio.h>

int main() {
    float side1, side2, side3;
    float perimeter;

    printf("Enter the lengths of three sides of a triangle:\n");
    scanf("%f %f %f", &side1, &side2, &side3);

    if (side1 + side2 > side3 && side2 + side3 > side1 && side1 + side3 > side2) {
        perimeter = side1 + side2 + side3;
        printf("Triangle is valid.\n");
        printf("Perimeter: %.2f\n", perimeter);
    } else {
        printf("Triangle is not valid.\n");
    }

    return 0;
}