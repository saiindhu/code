#include <stdio.h>

void main()
{
    int a[10],sum=0,i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
    sum=sum+a[i];
    }
    printf("%d",sum);
    getch();
}
