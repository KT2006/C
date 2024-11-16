#include<stdio.h>
int main(){
    char name[100];
    printf("enter a text:");
    fgets(name,(100),stdin);
    printf("entered string is :");
    puts(name);
    float a;
    printf("enter a float value:");
    scanf("%f",&a);
    printf("the float value of the number is:%f",(float) a - (int)a );
}