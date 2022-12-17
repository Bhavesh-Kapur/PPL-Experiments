/*swaping of two numbers */

#include<stdio.h>
int main()
 {
    int n1,n2,t;
    printf("Enter two numbers ");
    scanf("%d%d",&n1,&n2);  
    t = n1;
    n1 = n2;          // with the help of third variable 
    n2 = t;
    printf("The swap numbers are %d %d",n1,n2);
 }