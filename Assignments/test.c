#include <stdio.h>
int main()
{int note500,note100,note50,note20,note10,note5,note2,note1;
int amount;
scanf("%d",&amount);
note500=amount/500;
if(amount=amount-(note500*500));
printf("500:%d\n",note500);
note100=amount/100;
if(amount=amount-(note100*100));
printf("100:%d\n",note100);
note50=amount/50;
if(amount=amount-(note50*50));
printf("50:%d\n",note50);
note20=amount/20;
if(amount=amount-(note20*20));
printf("20:%d\n",note20);
note10=amount/10;
if(amount=amount-(note10*10));
printf("10:%d\n",note10);
note5=amount/5;
if(amount=amount-(note5*5));
printf("5:%d\n",note5);
note2=amount/2;
if(amount=amount-(note2*2));
printf("2:%d\n",note2);
note1=amount/1;
printf("1:%d",note1);
return 0;
}