//Take hours and minutes and convert them into minutes.
#include<stdio.h>
int main(){
   int hr,min,totalmins;     //RA2311030010150
    printf("Hours:");
    scanf("%d",&hr);
      printf("Minutes:");
    scanf("%d",&min);

    totalmins = (hr*60)+min;
    printf("Total number of minutes=%d",totalmins);
}