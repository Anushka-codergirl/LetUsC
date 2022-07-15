/*
The distance between two cities (in km.) is input through the keyboard. Write a program to convert and print this distance in meters, feet, inches and centimeters.
*/

#include <stdio.h>
int main()
{
    float km, m, ft, in, cm;
    printf("Enter the distance between two cities (in km.) : ");
    scanf("%f", &km);
    m = km * 1000;
    ft = km * 3280.8;
    in = km * 39370.1;
    cm = km * 100000;
    printf("The distance in meters is %f\n", m);
    printf("The distance in feet is %f\n", ft);
    printf("The distance in inches is %f\n", in);
    printf("The distance in centimeters is %f\n", cm);
    return 0;
}