#include <stdio.h>

void main()
{
    int n,r,a,t;
    scanf("%d",&n);
    while(n)
    {
        r=n%10;
        t=(t*10)+r;
        n=n/10;
        
    }
    a=t;
    while(a)
    {
        r=a%10;
        printf("%d ",r);
        a=a/10;
    }
    getch();
}
