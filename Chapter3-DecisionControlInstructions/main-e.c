/*
A five-digit number is entered through the keyboard. Write a program to obtain the reversed number and to determine whether the original and reversed numbers are equal or not. 
*/

#include<stdio.h>
int main(){
    int num, rev = 0;
    printf("Enter a five-digit number: ");
    scanf("%d", &num);
    rev = (num % 10) * 10000 + (num / 10 % 10) * 1000 + (num / 100 % 10) * 100 + (num / 1000 % 10) * 10 + (num / 10000);
    printf("Reverse number: %d\n", rev);
    if(num == rev){
        printf("The original and reversed numbers are equal\n");
    }
    else{
        printf("The original and reversed numbers are not equal\n");
    }
}