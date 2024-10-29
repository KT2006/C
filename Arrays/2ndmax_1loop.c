#include<stdio.h>
#include<limits.h>
int main(){
    int arr[5]={2023,2999,2123,1412,3422};
    int max=INT_MIN;
    int smax=INT_MIN;
    for(int i=0;i<=4;i++){
        if(max<arr[i]) {
            smax=max;//smax=max;agar decreasing order rha toh yeh cndn sahi ans degi.
            max=arr[i];
        }
        else if(smax<arr[i] && max!= arr[i]){//max!= arr[i] yeh cndtn elements k repeat hone pe sahi ans degi.
            smax=arr[i];
        }
}
}