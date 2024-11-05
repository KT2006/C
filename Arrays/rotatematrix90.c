#include<stdio.h>
int main(){
    int n;
    printf("Enter no.of rows/columns:");
    scanf("%d",&n);
     
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }printf("\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr[j][i]);//kuch nahi bas i j ka j i kardo 
        }
        printf("\n");
    }
}