/*
Given a point(x,y), write a program to find out if it lies on the X-axis, Y-axix or on the origin.
*/

#include<stdio.h>
int main(){
    int x, y;
    printf("Enter the coordinates of the point: ");
    scanf("%d %d", &x, &y);
    if(x == 0 && y == 0){
        printf("The point lies on the origin\n");
    }
    else if(x == 0){
        printf("The point lies on the Y-axis\n");
    }
    else if(y == 0){
        printf("The point lies on the X-axis\n");
    }
    else{
        printf("The point lies outside the origin\n");
    }
    return 0;
}