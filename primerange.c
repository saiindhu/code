#include <stdio.h>

void main()
{
  int a,t=0,i,b,j,c=0;
 scanf("%d%d",&a,&b);
 for(i=a;i<=b;i++)
 {
     t=0;
for(j=2;j<i;j++)
{
    if(i%j==0)
    {
        t=1;
    }
}
 if(t==0)
 {
   c++;  
 }
}
printf("%d",c);
  getch();
}
