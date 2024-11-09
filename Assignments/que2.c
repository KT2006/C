//Program for finding volume of a sphere.
#include<stdio.h>
int main(){
    float r;           //RA2311030010150
    printf("Enter the radius:");
    scanf("%f",&r);
    float pi =3.14;
    float volume = (4.0f/3.0f)*pi*(r*r*r);
    printf("The volume of the sphere is: %f",volume);

}