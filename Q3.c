/* Write a c program to convert temperature from celcius to fahrenheit and kelvin scales */ 

#include<stdio.h>
int main()
 {
    float temp,kel,fah;
    printf("Enter the temperature in celcius scale ");
    scanf("%f",&temp);
    kel =  temp + 273;
    printf("Temperatur in kelvin scale is %f\n",kel);
    fah = (temp * 9/5)+32; 
    printf("Temperatur in Fahrenheit is %f",fah);
    return 0;
 }