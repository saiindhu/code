#include <stdio.h>

void main()
{
    int c,a,b,i,sum=0;
    scanf("%d %d %d",&a,&b,&c);
    for(i=0;i<c;i++)
    {
        sum=(c*(2*a+(c-1)*b))/2;
    
    }
    printf("%d",sum);
    getch();
}
