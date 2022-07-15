/*
Ramesh's basic salary is input through the keyboard. His dearness allowance is 40% of basic salary, and house rent allowance is 20% of basic salary. Write a program to calculate his gross salary.
*/

#include <stdio.h>
int main()
{
    float basicSal, dearness, rent, grossSal;
    printf("Enter the basic salary of Ramesh: ");
    scanf("%f", &basicSal);
    dearness = basicSal * 0.4;
    rent = basicSal * 0.2;
    grossSal = basicSal + dearness + rent;
    printf("The gross salary of Ramesh is %f\n", grossSal);
    return 0;
}
