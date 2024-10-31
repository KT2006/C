#include<stdio.h>
int main(){
    int arr[7]={1,2,3,4,5,6,7};
    int sumOfEven=0,sumOfOdd=0;
    for(int i=0;i<=6;i++){
        if(i%2==0) sumOfEven+=arr[i];// sum of even index numbers
        else sumOfOdd+=arr[i];
       
    }
 printf("%d",sumOfEven-sumOfOdd);
}