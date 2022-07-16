/*
If the marks obtained by a student in five different subjects are input through the keyboard, write a program to find out the aggregate marks and percentage marks obtained by the student. Assume that the maximum marks that can be obtained by a student in each subject is 100.
*/

#include<stdio.h>
int main()
{
    int sub1, sub2, sub3, sub4, sub5, total=0, percentage;
    printf("Enter the marks obtained by the student in five subjects: ");
    scanf("%d %d %d %d %d", &sub1, &sub2, &sub3, &sub4, &sub5);
    total = sub1 + sub2 + sub3 + sub4 + sub5;
    percentage=total*100/500;
    printf("The aggregate marks obtained by the student is %d\n",total);
    printf("The percentage marks obtained by the student is %d\n",percentage);
    return 0;
}