// incomplete. bana nahi so banaya nahi sorry!!
#include<stdio.h>
int main(){
    //order of matrix
    int n;
    printf("Enter no.of rows/columns in matrix:");
    scanf("%d",&n);
    int arr[n][n];
         printf("\n");
       // spiral printing..
       int minr=0;
       int maxr=n-1;
       int minc=0;
       int maxc=n-1;
       int tne=n*n;
       int count=0;
       int x=1;
       while(count<tne){
        //printing the minimum row.
        for(int j=minc;j<=maxc && count<tne && x<n*n;j++){
            arr[minr][j]+=x;
            count++;
        }
            x++;
            minr++;
            //printing the maximum column.
            for(int i=minr;i<=maxr && count<tne  && x<n*n;i++){
                arr[i][maxc]+=x;
                count++;
                }
                x++;
            maxc--;
            //printing the maximum row.
            for(int j=maxc;j>=minc && count<tne  && x<n*n;j--){
                    arr[maxr][j]+=x;
                count++;
            }
                x++;
            maxr--;
            //printing the minimum column.
            for(int i=maxr;i>=minr && count<tne  && x<n*n;i--){
                arr[i][minc]+=x;
                count++;
            }
                x++;
            minc++;
       }
   
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    printf("%d ",arr[i][j]);
                }
                printf("\n");
            }
        
        }
       