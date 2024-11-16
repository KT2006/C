#include<stdio.h>
int main(){
    printf("Hello World!\n");
    char name[30];
    printf("enter your name :");
    scanf("%s",&name);
    printf(" Hi! %s \n",name);

    int a,b;
    printf("enter two numbers:");
    scanf("%d",&a);
     scanf("%d",&b);
    
    printf(" The sum of the two numbers: %d \n", a+b);
     printf(" The difference of the two numbers: %d \n", a-b);
     printf("The multiplication of the two numbers: %d \n",a * b);
    printf("The division of the two numbers: %0.2f \n", (float) a / (float) b );



    
}