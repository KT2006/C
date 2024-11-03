#include<stdio.h>// entered number se bade kitne bade number h batayega 
int main(){
    int arr[5]={1,2,3,4,5};
    int count=0,x;
    printf("Enter a number:");
    scanf("%d",&x);
    for(int i=0;i<=4;i++){
if(arr[i]>x) count++;
}
printf("%d",count);
}