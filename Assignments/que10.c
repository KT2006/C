//Program for finding the third angle of the triangle.
#include<stdio.h>
int main(){
    int angle1, angle2;        //RA2311030010150
    printf("Enter the value of 1st angle:");
    scanf("%d,",&angle1);
   printf("Enter the value of 2nd angle:");
     scanf("%d",&angle2);
  int  angle3 = 180-(angle1+angle2);
    printf("The value of 3rd angle in degrees is: %d",angle3);

}