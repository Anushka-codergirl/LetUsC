/*
Temperature of a city in Fahrenheit degrees is input through the keyboard. Write a program to convert this temperature into Centigrade degrees.
*/

#include <stdio.h>
int main()
{
    float f, c;
    printf("The temperature of city in Fahrenheit degrees: ");
    scanf("%f", &f);
    c = (f - 32) * 5 / 9;
    printf("The temperature of city in Centigrade degrees is: %.2f", c);
    return 0;
}