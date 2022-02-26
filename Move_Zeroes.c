#include<stdio.h>
int main()
{
    int nums[100],i,j=0,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&nums[i]);
    }
    for(i=0;i<n;i++)
    {
        if(nums[i]!=0)
        {
            nums[j]=nums[i];
            j++;
        }
    }
    for(i=j;i<n;i++)
    {
        nums[i]=0;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",nums[i]);
    }
    return 0;
}