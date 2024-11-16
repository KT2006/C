#include<stdio.h>
int main(){
    int a , b , c,d;
    printf("Enter the first number:");
    scanf("%d",&a);
      printf("Enter the second number:");
    scanf("%d",&b);
      printf("Enter the third number:");
    scanf("%d",&c);
     printf("Enter the fourth number:");
    scanf("%d",&d);
    if (a>b && a>c && a>d)
    {
printf("The greatest number among the following is%d \n",a);
    }
     if (b>a && b>c && b>d)
    {
printf("The greatest number among the following is%d \n",b);
    }
     if (c>a && c>b && c>d)
    {
printf("The greatest number among the following is%d \n",c);
    }
    else
    {
        printf("The greatest number among the following is: %d \n",d);
    }


    
}
