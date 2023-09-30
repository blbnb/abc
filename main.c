

#include <stdio.h>
int main(void)
{
   char gender,sport,eat; 
   double faHeight,moHeight,height;
   printf("请输入父亲的身高和母亲的身高:\n请输入性别:\n是否有良好的饮食(Y/N):\n是否喜爱体育(Y/N):");
   scanf("%lf%lf%c%c%c",&faHeight,&moHeight,&gender,&sport,&eat); 
   if((gender=='M')||(gender=='m'))
   {
      height=(faHeight+moHeight)*0.54;
   }
   else
   {
      height=(faHeight*0.923+moHeight)*1.0/2;
   }
   if((sport=='Y')||(sport=='y'))
   {
      height=height*(1+0.02);
   }
   if((eat=='Y')||(eat=='y'))
   {
      height=height*(1+0.015);
   }
   printf("身高预测为:%.2f",height);
   return 0;



   

}
