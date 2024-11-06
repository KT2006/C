#include<stdio.h>
int main(){
    //order of matrix
    int m,n;
    printf("Enter no.of rows in matrix:");
    scanf("%d",&m);
        printf("Enter no.of columns in matrix:");
    scanf("%d",&n);
    //input of matrix.
    int a[m][n];
       printf("\nEnter the elements of matrix:\n");
       for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
       }   printf("\n");
       // spiral printing..
       int minr=0;
       int maxr=m-1;
       int minc=0;
       int maxc=n-1;
       int tne=m*n;
       int count=0;
       while(count<tne){
        //printing the minimum row.
        for(int j=minc;j<=maxc && count<tne;j++){
            printf("%d ",a[minr][j]);
            count++;
        }
            minr++;
            //printing the maximum column.
            for(int i=minr;i<=maxr && count<tne;i++){
                printf("%d ",a[i][maxc]);
                count++;
                }
            maxc--;
            //printing the maximum row.
            for(int j=maxc;j>=minc && count<tne;j--){
                printf("%d ",a[maxr][j]);
                count++;
            }
            maxr--;
            //printing the minimum column.
            for(int i=maxr;i>=minr && count<tne;i--){
                printf("%d ",a[i][minc]);
                count++;
            }
            minc++;
       }
   

        
        }
       