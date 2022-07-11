#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n)
    {
        char s[100];
        scanf("%s",s);
        int k,i;
        int temp=0;
        k=strlen(s);
        for(i=0;i<k;i++)
        {
            if(s[i]!=s[k-i-1])
            {
                temp = 1;
                break;
            }
        }
        if(temp==0)
        {
            if(k%2==0)
            {
                printf("YES EVEN
");
            }
            else
            {
                printf("YES ODD
");
            }
        }
        else
        {
            printf("NO
");
        }
        n=n-1;
    }
}