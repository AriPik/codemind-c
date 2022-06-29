
#include<stdio.h>
int main()
{
    int n,r,sum=0,x,y=0,z,sq1,sq2;
    scanf("%d",&n);
    sq1=n*n;
    while(n!=0)
    {
        r=n%10;
        sum=sum*10+r;
        n=n/10;
    }
    sq2=sum*sum;
    while(sq2!=0)
    {
        x=sq2%10;
        y=y*10+x;
        sq2=sq2/10;
    }
    if(sq1==y)
      printf("True");
    else
      printf("False");
    return 0;
}