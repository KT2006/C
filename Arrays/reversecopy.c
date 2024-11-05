#include<stdio.h>
int main(){
    int arr[5]={2023,2999,2123,1412,3422};
    int brr[5];
    for(int i=0;i<=4;i++){
        brr[i]=arr[4-i];
    }
    for(int i=0;i<=4;i++){

    printf("%d ",brr[i]);
    }
}