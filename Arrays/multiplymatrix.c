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
       }
        //order of 2nd matrix
        int p,q;
    printf("Enter no.of rows for 2nd matrix :");
    scanf("%d",&p);
        printf("Enter no.of columns for 2nd matrix:");
    scanf("%d",&q);
    //input of 2nd matrix.
     int b[p][q];
       printf("\nEnter the elements of 2nd matrix:\n");
       for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            scanf("%d",&b[i][j]);
        }
       }
       //check
       if(n!=p){
        printf("The matrices cannot be multiplied.");
       }
       else{
        //multiplication....
        int res[m][q];
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                // i-th row of a, j-th column of b.
                res[i][j]=0;
                for(int k=0;k<n;k++){
                    res[i][j]+=a[i][k]*b[k][j];
                }
            }
        }
        printf("The multiplication of the 2 entered matrices is:\n");
   for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                printf("%d ",res[i][j]);
            }
            printf("\n");
   }
       } 
    return 0;
}