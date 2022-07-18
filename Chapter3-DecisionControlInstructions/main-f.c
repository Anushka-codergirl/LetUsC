/*
If the ages of Ram, Shyam and Ajay are input through the keyboard, write a program to determine the youngest of the three.
*/

#include<stdio.h>
int main(){
    int RamAge, ShyamAge, AjayAge;
    printf("Enter the age of Ram: ");
    scanf("%d", &RamAge);
    printf("Enter the age of Shyam: ");
    scanf("%d", &ShyamAge);
    printf("Enter the age of Ajay: ");
    scanf("%d", &AjayAge);
    if(RamAge < ShyamAge && RamAge < AjayAge){
        printf("Ram is the youngest\n");
    }
    else if(ShyamAge < RamAge && ShyamAge < AjayAge){
        printf("Shyam is the youngest\n");
    }
    else if(AjayAge < RamAge && AjayAge < ShyamAge){
        printf("Ajay is the youngest\n");
    }
    else{
        printf("All the ages are equal\n");
    }
    return 0;
}