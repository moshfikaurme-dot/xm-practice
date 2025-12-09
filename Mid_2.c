/*write a C program to computer the area and the perimeter and area of a rectangle with a height of 7 inches and width of 5 inches.
*/

#include<stdio.h>
int main(){
    int width = 5, height = 7, area , perimeter;
    area = height*width;
    perimeter = 2*(height+width);
    printf("area of rectangle is :%d\n",area);
    printf("primeter of recctangle is :%d",perimeter);
}