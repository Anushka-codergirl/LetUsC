/*
Write a program to receive Cartesian co-ordinates(x,y) of a point and convert them into polar co-ordinates(r,phi). Hint: r = sqrt(x^2 + y^2) and phi = atan(y/x)
*/

#include <stdio.h>
#include <math.h>
int main()
{
    float x, y, r, phi;
    printf("Enter the Cartesian co-ordinates of a point: ");
    scanf("%f %f", &x, &y);
    r = sqrt(x * x + y * y);
    phi = atan(y / x);
    printf("The polar co-ordinates of the point are: %f %f", r, phi);
    return 0;
}