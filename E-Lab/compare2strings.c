#include<stdio.h>
#include<string.h>
int main(){
    char str1[100];
    char str2[100];
    printf("Enter string 1:");
    gets(str1);
    printf("enter string 2:");
    gets(str2);
     int check =strcmp(str1,str2);
     if(check==0) printf("True");
     else printf("false");
    return 0;
}