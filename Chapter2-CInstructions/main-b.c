/*
If a five-digit number is input through the keyboard, write a program to reverse the number.
*/

#include <stdio.h>
int main()
{
    int num, rev = 0;
    printf("Enter a five-digit number: ");
    scanf("%d", &num);
    rev = (num % 10) * 10000 + (num / 10 % 10) * 1000 + (num / 100 % 10) * 100 + (num / 1000 % 10) * 10 + (num / 10000);
    printf("Reverse number: %d\n", rev);
    return 0;
}