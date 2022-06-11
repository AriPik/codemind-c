#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int a,rem;
        scanf("%d",&a);
        int at=a;
        int rev=0;
        while(a!=0)
        {
            rem=a%10;
            rev=rev*10+rem;
            a=a/10;
        }
        if(at==rev)
        {
            printf("True
");
        }
        else
        {
            printf("False
");
        }
    }
    return 0;
}