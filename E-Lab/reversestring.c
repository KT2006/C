#include<stdio.h>
#include<string.h>
int main(){
    int i;
char str[100];
printf("Enter a string:");
scanf("%[^\n]s",&str);
int n = strlen(str);
for(int i=n;i>=0;i--){
printf("%c",str[i]);
}
    return 0;
}