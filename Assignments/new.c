#include <stdio.h>

int main() {
    int a,b,c,d,e,f;
    int sum;
    printf("enter the numbers:");
    scanf("%d,%d,%d,%d,%d.%d " ,&a,&b,&c,&d,&e,&f);
    sum = a+b+c+d+e+f;
    printf("The sum of the numbers=%d",sum);
    return 0;
}