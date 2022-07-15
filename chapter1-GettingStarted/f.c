/*
Paper of size A0 has dimension 1189 x 841 mm. Each subsequent size A(n) is defined as A(n-1) cut in half parallel to the shorter side. Thus paper of size A1 would have dimensions 841 mm x 594 mm. Write a program to calculate and print paper sizes A0, A1, A2, ... A8.
*/

#include<stdio.h>
int main(){
    int l = 1189, b = 841;
    printf("Paper size of A0 = %d mm x %d mm\n",l,b);
    printf("Paper size of A1 = %d mm x %d mm\n",b,l/2);
    printf("Paper size of A2 = %d mm x %d mm\n",l/2,b/2);
    printf("Paper size of A3 = %d mm x %d mm\n",b/2,l/4);
    printf("Paper size of A4 = %d mm x %d mm\n",l/4,b/4);
    printf("Paper size of A5 = %d mm x %d mm\n",b/4,l/8);
    printf("Paper size of A6 = %d mm x %d mm\n",l/8,b/8);
    printf("Paper size of A7 = %d mm x %d mm\n",b/8,l/16);
    printf("Paper size of A8 = %d mm x %d mm",l/16,b/16);
    return 0;
}
