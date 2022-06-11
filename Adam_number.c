#include<stdio.h>
#include<math.h>
int main()
{
    int n,sq,sq1,rem,rem1,rev=0,rev1=0;
    scanf("%d",&n);
    sq=pow(n,2);
    while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    sq1=pow(rev,2);
    while(sq1!=0)
    {
        rem1=sq1%10;
        rev1=rev1*10+rem1;
        sq1=sq1/10;
    }
    if(sq==rev1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}