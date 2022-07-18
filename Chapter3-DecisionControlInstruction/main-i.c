/*
Given the length and breadth of a rectangle, write a program to find whether the area of the rectangle is greater than its perimeter. For example, the area of the rectangle with length = 5 and breadth = 4 is greater than its perimeter.
*/

#include<stdio.h>
int main(){
    int length = 5, breadth = 4;
    if(length * breadth > ( 2 * (length + breadth))){
        printf("The area of the rectangle is greater than its perimeter\n");
    }
    else{
        printf("The area of the rectangle is not greater than its perimeter\n");
    }
    return 0;
}