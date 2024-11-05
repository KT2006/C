#include<stdio.h>
void reverse(int arr[]){
    int i=0;
    int j=4;
    while (i<j)
    {int temp= arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
    i++; 
    j--;
    }return ;
}
int main(){
    int arr[5]={2023,2999,2123,1412,3422};
    reverse(arr);
    for (int i = 0; i <=4; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}