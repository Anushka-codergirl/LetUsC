/*
If lengths of three sides of a triangle are input through the keyboard, write a program to find the area of the triangle.
*/

#include<stdio.h>
int main()
{
    float a, b, c, s, area;
    printf("Enter the length of three sides of a triangle: ");
    scanf("%f %f %f", &a,&b,&c);
    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("\nThe area of the triangle is %f", area);
    return 0;
}