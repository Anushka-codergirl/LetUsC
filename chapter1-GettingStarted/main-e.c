/*
The length and breadth of a rectangle and radius of a circle are input through the keyboard. Write a program to calculate the area and perimeter of the rectangle, and the area of circumference of the circle.
*/

#include<stdio.h>
#include<math.h>
int main()
{
    float length,breadth,radius,arRec,arCir,perimeter,circumference;
    printf("Enter the length of the rectangle: ");
    scanf("%f",&length);
    printf("Enter the breadth of the rectangle: ");
    scanf("%f",&breadth);
    printf("Enter the radius of the circle: ");
    scanf("%f",&radius);
    arRec=length*breadth;
    perimeter=2*(length+breadth);
    arCir=3.14*radius*radius;
    circumference=2*3.14*radius;
    printf("The area of the rectangle is %f\n",arRec);
    printf("The perimeter of the rectangle is %f\n",perimeter);
    printf("The area of the circle is %f\n", arCir);
    printf("The circumference of the circle is %f\n",circumference);
    return 0;
}
