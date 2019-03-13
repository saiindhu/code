#include <stdio.h>

void main()
{
    char s[50];
    int i,c=0,c1=0;
    gets(s);
    for(i=0;s[i]!='\0';i++)
    {
        if((s[i]>=65 && s[i]<=91) || (s[i]>=97 && s[i]<=122))
        {
            c=1;
            
        }
        if(s[i]=='1' || s[i]=='2' || s[i]=='3' || s[i]=='4' || s[i]=='5' || s[i]=='6' || s[i]=='7' || s[i]=='8' || s[i]=='9' || s[i]=='0')
        {
            c1=1;
        }
    }
    if(c==1 && c1==1)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    getch();
}
