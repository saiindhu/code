
#include <stdio.h>

void  main()
{
    int n,i;
    scanf("%d",&n);
    for(i=n;i>=0;i--)
    {
        if(i%2==0)
        {
            printf("%d",i);
        break;
        }
    }

getch();
}
