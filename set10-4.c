#include <stdio.h>

void main()
{
    int a[10],n,k,i;
    scanf("%d",&n);
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i==k)
        {
            printf("%d",a[i-1]);
        }
    
    }
    getch();
}
