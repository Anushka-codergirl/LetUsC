/*
Given three points (x1,y1),(x2,y2) and (x3,y3), write a program to check if all the three points fall on one straight line.
*/

#include<stdio.h>
int main(){
    int x1, y1, x2, y2, x3, y3;
    printf("Enter the coordinates of the first point: ");
    scanf("%d %d", &x1, &y1);
    printf("Enter the coordinates of the second point: ");
    scanf("%d %d", &x2, &y2);
    printf("Enter the coordinates of the third point: ");
    scanf("%d %d", &x3, &y3);
    if(x1 == x2 && x2 == x3 && y1 == y2 && y2 == y3){
        printf("All the points fall on one straight line\n");
    }
    else{
        printf("All the points do not fall on one straight line\n");
    }
    return 0;
}