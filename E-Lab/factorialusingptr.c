#include<stdio.h>
void findFactorial(int n,int *fact){
for(int i=1;i<=n;i++){
    *fact=*fact * i;
}
printf("%d",*fact);
}
int main(){
    int fact,n;
    printf("Enter a number to find it's factorial:");
    scanf("%d",&n);
    findFactorial(n,&fact);
}