#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    int i,len,k;
    int c_z=0,c_o=0;
    scanf("%[^
]s",str);
    len=strlen(str);
    if(len<=20)
    {
        for(i=0;i<len;i++)
        {
            if(str[i]=='z')
            {
                c_z+=1;
            }
            else
            {
                c_o+=1;
            }
        }
    }
    k=2*c_z;
    if(k==c_o)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
}