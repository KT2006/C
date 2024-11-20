#include<stdio.h>
int checkPrime(long n){
    for(int i=1;i<n;i++){
        if(n%i==0) return i;
        else return 1;
    }
}
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    checkPrime(n);
}