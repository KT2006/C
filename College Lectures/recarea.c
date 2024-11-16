#include<stdio.h>
int main(){
     int a,b,area,peri;
     printf("Enter the length of the rectangle:");
     scanf("%d",&a);
     printf("Enter the breadth of the reactangle:");
       scanf("%d",&b);
       area = a*b;// by the way the perimeter for squares and rectangles is always less than its area.
       peri = 2 * (a+b);
       if (area>peri)
       {
        printf("The rectangle's area is large.%d\n",area);
    
       }
       else{
        printf("The perimeter is large.%d\n",peri);
       }
       

}