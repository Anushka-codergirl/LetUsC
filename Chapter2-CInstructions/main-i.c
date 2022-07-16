/*
Consider a currency system in which there are notes of seven denominations, namely, Re.1, Rs.2, Rs.5, Rs.10, Rs.50, Rs.100. If a sum of Rs.N is entered through the keyboard, write a program to compute the smallest number of notes that will combine to give Rs.N.
*/

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the amount \n");
    scanf("%d",&a);
    b=a/100;
    c=a%100;
    b=b+c/50;
    c=c%50;
    b=b+c/10;
    c=c%10;
    b=b+c/5;
    c=c%5;
    b=b+c/2;
    c=c%2;
    b=b+c/1;

printf("\nNumber of notes is: %d",b);
    return 0;
}
