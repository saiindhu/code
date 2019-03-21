#include <stdio.h>

void main()
{
    char a[50],b[50];
    int i,c=0,c1=0;
    scanf("%s",a);
    scanf("%s",b);
    for(i=0;a[i]!=NULL;i++)
    {
        c++;
    }
    for(i=0;a[i]!=NULL;i++)
    {
        c1++;
    }
    if(c==c1)
    {
        for(i=0;i<=c;i++)
        {
         if(a[i]==b[i])
         {
             printf("Yes");
         }
         else
         {
             printf("No");
         }
        }
    }
    else
    {
        printf("No");
    }
    getch();
}
