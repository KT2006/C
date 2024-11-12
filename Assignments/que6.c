//convert minutes into hours and minutes.
#include<stdio.h>
int main(){
   int min,hours,remainingmins;      //RA2311030010150
   int totalmins;
    printf("minutes:");
    scanf("%d",&min);
    totalmins = min/60;
    remainingmins=min%60;

    printf("%dhours %d minutes",totalmins,remainingmins);

}