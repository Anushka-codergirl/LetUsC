/*
Any integer is input through the keyboard. Write a program to find out whether it is an odd number or even number.
*/

#include<stdio.h>
int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    if(num % 2 == 0){
        printf("The number is even\n");
    }
    else{
        printf("The number is odd\n");
    }
    return 0;
}