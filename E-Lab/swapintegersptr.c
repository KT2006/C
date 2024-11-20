#include<stdio.h>
    void swapNumbers(int *a, int *b){
        int temp =*a;
        *a=*b;
        *b= temp;
        printf("%d %d",*a,*b);
        
    }
int main(){
    int a,b;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    swapNumbers(&a,&b);
}