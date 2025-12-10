/*write a c program to computer the perimeter and area of a circle with a given radius
*/

#include<stdio.h>
#define pie 3.1416
int main(){
    float radius , perimeter;
    printf("enter any radius of a circle:");
    scanf("%f",&radius);

    perimeter = 2* pie * radius;

    printf("so perimeter is:%0.3f",perimeter);
    return 0;
}

