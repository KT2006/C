#include<stdio.h>
int main(){
    int arr[5]={1,2,3,4,5};
    for(int i=0;i<=4;i++){
        if(i%2==0) arr[i]=arr[i]+10;
        else arr[i]=arr[i]*2;
       
    }
for(int i=0;i<=4;i++){
 printf("%d ",arr[i]);
}
}