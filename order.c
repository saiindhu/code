#include <stdio.h>

void main()
{
    char ch[50];
    int i,j,temp;
    scanf("%s",ch);
    for(i=0;ch[i]!=NULL;i++)
    {
        for(j=i+1;ch[j]!=NULL;j++)
        {
            if(ch[i]>ch[j])
            {
                temp=ch[i];
                ch[i]=ch[j];
                ch[j]=temp;
            }
        }
    }
    printf("%s",ch);
    getch();
}
