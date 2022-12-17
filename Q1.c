/*Find the area of Parallelogram, Trapezoid, Rhombus, Sphere, Ellipse  */

 #include <stdio.h>

int main()
{
    int a,height,base,lbase,sbase,sdiagnol,ldiagnol,radius,mrad,minor;
    double area;
    do
    {
    printf("\n1-parallelogram \n 2-trapeziod \n 3-Rhombus \n 4-sphere\n 5- ellipse\n 6- to exit\n");
    scanf("%d",&a);
    switch (a)
    {
        case 1:
        printf("Enter BASE AND HEIGHT OF PARALLELOGRAM-");
        scanf("%d %d",&height,&base);
        area=(double)height*base;
        printf("AREA IS %f",area);
        break;
        
        case 2:
        printf("Enter Height ,Long Base And Short Base ");
        scanf("%d %d %d",&height,&lbase,&sbase);
        area=(double)0.5*(lbase+sbase)*height;
        printf("AREA IS %f",area);
        break;
        
        case 3:
        printf("enter LENGTH of shorter diagnol and longer diagnol");
        scanf("%d %d",&sdiagnol,&ldiagnol);
        area=(double)1/2*sdiagnol*ldiagnol;
        printf("AREA IS %f",area);
        break;
        
        case 4:
        printf("ENTER RADIUS OF SPHERE");
        scanf("%d",&radius);
        area=(double)4*22/7*radius*radius;
        printf("AREA IS %f",area);
        break;
        
        case 5:
        printf("ENTER MINOR AND MAJOR RADIUS");
        scanf("%d %d",&minor,&mrad);
        area=(double)22/7*minor*mrad;
        printf("AREA IS %f",area);
        break;
        
        case 6 :printf("Bye cyaa soon \n");
        break;
        default:
        printf("INVALID CHOICE");

    }
    }while(a!=6);
 
    
}