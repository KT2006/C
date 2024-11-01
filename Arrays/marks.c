#include<stdio.h>
int main(){
    int marks[10]={95,90,31,25,100,50,65,89,97,30};
    for(int i=0;i<10;i++){// less marks ko uske index ke saath print karadiya.
        if(marks[i]<35) {
            printf("Marks = %d \n",marks[i]);
            printf("Index of marks = %d \n",i);
        }
    }
}