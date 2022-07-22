#include<stdio.h>
#include<string.h>
int main()
{
    char st[100];
    int i,l,max;
    scanf("%[^
]s",st);
    l=strlen(st);
    max=int(st[i]);
    for(i=0;i<l;i++)
    {
        if(max<int(st[i]))
        {
            max=int(st[i]);
        }
    }
    printf("%c",max);
}