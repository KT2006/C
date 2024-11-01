#include<stdio.h>
int main(){
    int arr[5]={2023,2999,2123,1412,3422};
    int max=arr[0];
    for(int i=0;i<=4;i++){
if(max<arr[i]) max=arr[i];
    }
    printf("%d",max);
}