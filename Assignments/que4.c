//Convert km/hr to miles/hr.
#include<stdio.h>
int main(){
   int n;            //RA2311030010150
   float speed;
    printf("Enter a speed in km/hr:");
    scanf("%d",&n);
    speed = n * 0.621371;
    printf("The speed in mile/hr=%f",speed);
}