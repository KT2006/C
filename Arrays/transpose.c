#include<stdio.h>
int main(){
    int n;
    printf("Enter no.of rows/columns:");
    scanf("%d",&n);
      int arr[n][n];//input liya
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<n;i++){//transpose
        for(int j=0;j<=i;j++){
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }printf("\n");
    //rotation
    for(int i=0;i<n;i++){
        int j=0;
        int k=n-1;
        while(j<k){
            int temp=arr[i][j];
            arr[i][j]=arr[i][k];
            arr[i][k]=temp;
            j++;
            k--;
        }
        printf("\n");
    }
        for(int i=0;i<n;i++){//print
        for(int j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

}