/*
Any year is input through the keyboard. Write a program to determine whether the year is a leap year or not. (Hint: Use the % (modulus) operator)
*/

#include<stdio.h>
int main(){
    int year;
    printf("Enter the year: ");
    scanf("%d", &year);
    if(year % 4 == 0){
        printf("The year is a leap year\n");
    }
    else{
        printf("The year is not a leap year\n");
    }
    return 0;
}