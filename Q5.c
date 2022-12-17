/* write a c program to print 1 to 10 except 8*/

#include<stdio.h>
int main()
{
    int n1,n2,n3;
    printf("Enter three numbers");
    scanf("%d%d%d",&n1,&n2,&n3);
    n1 = n1+n2+n3;
    n2 = n1-(n2+n3);
    n3 = n1-(n2+n3);
    n1 = n1-(n2+n3);

    printf("the swap values are \n");
    printf("%d",n1);
    printf("%d",n2);
    printf("%d",n3);

 }