#include<stdio.h>
#include<ctype.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n)
    {
        char s[100];
        scanf("%s",s);
        int i,flag=0;
        for(i=0;s[i]!=NULL;i++)
        {
            if(s[i]=='0'||s[i]=='1'||s[i]=='2'||s[i]=='3'||s[i]=='5'||s[i]=='6'||s[i]=='7'||s[i]=='8'||s[i]=='9')
            {
                flag=flag+1;
            }
        }
        if(flag==0)
        {
            printf("No
");
        }
        else
        {
            printf("Yes
");
        }
        n=n-1;
    }
    return 0;
}