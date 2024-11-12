//First name , Surname and DOB.
#include<stdio.h>
int main(){
    char firstName[25];
    char lastName[20];       //RA2311030010150
    int dob;
    printf("Enter your first name:");
    scanf("%s",&firstName);
      printf("Enter your last name:");
    scanf("%s",&lastName);
        printf("Enter your date of birth:");
    scanf("%d",&dob);
    printf("%s %s %d",firstName,lastName,dob);
}

