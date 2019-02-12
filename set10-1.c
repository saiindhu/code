#include <stdio.h>

void main()
{
    int l,w,h,s,v;
    scanf("%d %d %d",&l,&w,&h);
    s=2*((l*w)+(w*h)+(h*l));
    v=l*w*h;
    printf("%d %d",s,v);
    getch();
}
