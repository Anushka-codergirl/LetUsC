/*
Write a program to check whether a triangle is valid or not, when the three angles of the triangle are entered through the keyboard. A traingle is valid if the sum of all the three angles is equal to 180 degrees.
*/

#include<stdio.h>
int main(){
    int a, b, c;
    printf("Enter the angle of the triangle: ");
    scanf("%d", &a);
    printf("Enter the angle of the triangle: ");
    scanf("%d", &b);
    printf("Enter the angle of the triangle: ");
    scanf("%d", &c);
    if(a + b + c == 180){
        printf("The triangle is valid\n");
    }
    else{
        printf("The triangle is not valid\n");
    }
    return 0;
}