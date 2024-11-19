#include<stdio.h>
int main(){
    int sum;
int a[5][5];
for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
        scanf("%d",&a[i][j]);
    }
}for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
        printf("%d ",a[i][j]);
    }printf("\n");
}



    return 0;
}