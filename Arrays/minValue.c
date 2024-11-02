#include<stdio.h>
int main(){
    int arr[5]={2023,2999,23,1412,3422};
    int min=arr[0];
    for(int i=0;i<=4;i++){
if(min<arr[i]) min=min;
else min=arr[i];
    }
    printf("%d",min);
}