/*
Given the coordinates(x,y) of center of a circle and its radius, write a program that will determine whether a point lies inside the circle, on the circle or outside the circle. (Hint: Use sqrt() and pow() functions)
*/

#include<stdio.h>
#include<math.h>
int main(){

    int x, y, x1, y1, radius;
    float pc;

    printf("Enter the center co-ordinates of the circle: ");
    scanf("%d %d", &x, &y);
    printf("Enter the radius of the circle: ");
    scanf("%d", &radius);

    printf("Enter the point co-ordinates: ");
    scanf("%d %d", &x1, &y1);

    //check for distance between point and center point of circle
    pc = sqrt(pow(x1-x, 2)+pow(y1-y,2));
    if(pc>radius)
        printf("Point (%d,%d) lies outside the circle.", x1, y1);
    else if(pc<radius)
        printf("Point (%d,%d) lies inside the circle.", x1, y1);
    else if(pc==radius)
        printf("Point (%d,%d) lies on the boundary of circle.", x1, y1);
    else
        printf("Wrong Entry");
    return 0;
}