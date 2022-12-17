/* Swaping two numbers without using third variable*/

#include<stdio.h>
int main()
 {
    int n1,n2;
    printf("Enter two numbers ");
    scanf("%d %d",&n1,&n2);
    n1 = n1+n2;
    n2 = n1-n2;
    n1 = n1-n2;
    printf("The Swap numbers are %d %d",n1,n2);
    return 0;

 }