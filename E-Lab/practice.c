#include<stdio.h>
int main(){
    int n;
    printf("Enter a value:");
    scanf("%d\n",&n);
    int arr[2][n];
    for(int i=0;i<n;i++){
        for(int i=0;i<3;i++){
            for(int j=0;i<3;j++){
        scanf("%d %d",&arr[i][j],&arr[i][j]);
        if (arr[i][j]>arr[i][j+1])
        {
            printf("%d\n",arr[i][j+1]);
        }
        else printf("%d\n",arr[i][j+1]);
        }
            }
    }
    return 0;

}