/*9. Write a C program to calculate the distance between two points.
*/

#include<stdio.h>
#include<math.h>
int main()
{
    int x1, x2, y1, y2,x;
    float distance;
    printf("enter two point :(x1,y1)(x2,y2)\n");
    scanf("%d%d%d%d",&x1,&y1,&x2,&y2);



    x = pow((x1-x2),2)+pow((y1-y2),2);
    distance = sqrt(x);

    printf("%f",distance);



return 0;

}