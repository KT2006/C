#include<stdio.h>
int main(){
    //order of 1st matrix
    int m,n;
    printf("Enter no.of rows in 1st matrix:");
    scanf("%d",&m);
        printf("Enter no.of columns in 1st matrix:");
    scanf("%d",&n);
    //input of 1st matrix.
    int a[m][n];
       printf("\nEnter the elements of 1st matrix:\n");
       for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
       }   printf("\n");
       // wave printing..
       for(int j=0;j<n;j++){
        if(j%2==0){
            for(int i=m-1;i>=0;i--){
            printf("%d ",a[i][j]);
        }
        }else{
            for(int i=0;i<m;i++){
                printf("%d ",a[i][j]);
            }

        }
        printf("\n");
        }
       }
       