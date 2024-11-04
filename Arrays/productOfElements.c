#include<stdio.h>
int main(){
    int arr[5]={1,2,3,4,5};
    int mult=1;
    for(int i=0;i<=4;i++){
        mult=mult*arr[i];
    }
    printf("%d",mult);
}