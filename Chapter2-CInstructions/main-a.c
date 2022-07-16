/*
If a five-digit number is input through the keyboard, write a program to calculate the sum of its digits. (Hint: Use the modulus operator '%')
*/


#include <stdio.h>
int main()
{
    int num, sum = 0;
    printf("Enter a five-digit number: ");
    scanf("%d", &num);
    sum = (num / 10000) + (num / 1000 % 10) + (num / 100 % 10) + (num / 10 % 10) + (num % 10);
    printf("Sum of digits: %d\n", sum);
    return 0;
}