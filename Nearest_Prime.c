#include<stdio.h>
int main()
{
    int n,i,a,c=0,c1=0,r1,r2,k,min,max,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        for(j=a;j>=0;j--)
        {
            c=0;
            for(k=1;k<=j;k++)
            {
                if(j%k==0)
                {
                    c++;
                }
            }
            if(c==2)
            {
                min=j;
                break;
            }
        }
        for(j=a;;j++)
        {
            c1=0;
            for(k=1;k<=j;k++)
            {
                if(j%k==0)
                {
                    c1++;
                }
            }
            if(c1==2)
            {
                max=j;
                break;
            }
        }
        r1=a-min;
        r2=max-a;
        if(r1<r2)
        printf("%d
",min);
        else if(r1==r2)
        printf("%d
",min);
        else
        printf("%d
",max);
    }
}