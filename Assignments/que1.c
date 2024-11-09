//Degree celsius to Fahrenheit
#include<stdio.h>
int main(){
   int deg;     //RA2311030010150
   float temp;
    printf("Enter temperature in degree celsius:");
    scanf("%d",&deg);
    temp = (deg *1.8)+32;
    printf("The temperature in fahrenheit=%f",temp);
}