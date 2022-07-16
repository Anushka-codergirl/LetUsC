/*
Two numbers are input through the keyboard into two locations C and D. Write a program to interchange the contents of C and D.
*/

#include<stdio.h>
int main()
{
    int c, d;
    printf("Enter the two numbers: ");
    scanf("%d %d", &c, &d);
    printf("Before Interchange:");
    printf("\nThe contents of C is %d", c);
    printf("\nThe contents of D is %d", d);
    c = c + d;
    d = c - d;
    c = c - d;
    printf("\nAfter Interchange:");
    printf("\nThe contents of C is %d", c);
    printf("\nThe contents of D is %d", d);
    return 0;
}
