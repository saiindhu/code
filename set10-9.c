#include <stdio.h>
void main()
{
    int a,b,c,v;
    scanf("%d  %d %d",&a,&b,&c);
    v=(a*b)%c;
    printf("%d",v);
    getch();
}
