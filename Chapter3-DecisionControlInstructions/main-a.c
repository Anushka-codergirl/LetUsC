/*
If cost price and selling price of an item are input through the keyboard, write a program to determine whether the seller has made profit or incurred loss. Also determine how much profit he made or loss he incurred.
*/

#include<stdio.h>
int main(){
    float cost, sell;
    printf("Enter the cost price of the item: ");
    scanf("%f", &cost);
    printf("Enter the selling price of the item: ");
    scanf("%f", &sell);
    if(sell > cost){
        printf("The seller has made profit of %f\n", sell - cost);
    }
    else if(sell < cost){
        printf("The seller has incurred loss of %f\n", cost - sell);
    }
    else{
        printf("The seller has made no profit or loss\n");
    }
    return 0;
}