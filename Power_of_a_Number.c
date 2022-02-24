#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,m,n,mod;
    scanf("%d%d%d",&x,&y,&m);
    if(1<=x&&x<=20)
    {
        if(1<=y&&y<=100)
        {
            if(2<=m&&m<=100)
            {
                n=pow(x,y);
                mod=n%m;
            }
        }
    }
    printf("%d",mod);
}