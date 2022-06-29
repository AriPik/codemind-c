#include<stdio.h>
int self(int n)
{
    int i=n,dig=0;
    if(n%10==0)
    {
        return 0;
    }
    while(n!=0)
    {
        dig=n%10;
        if(i%dig!=0)
        {
            return 0;
            break;
        }
        n=n/10;
    }
    return 1;
}
int main()
{
    int i,j,n;
    scanf("%d",&i);
    scanf("%d",&j);
    for(n=i;n<=j;n++)
    {
        if(self(n))
        {
            printf("%d ",n);
        }
    }
}