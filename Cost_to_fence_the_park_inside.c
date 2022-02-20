#include<stdio.h>
int main()
{
    int Total_Cost,L,B,W,C,total_area;
    scanf("%d %d %d %d",&L,&B,&W,&C);
    if((L<=2*W) || (B<=2*W))
    {
        printf("Impossible");
    }
    else
    {
        total_area=(L*B)-((L-2*W)*(B-2*W));
        Total_Cost=total_area*C;
        printf("%d",Total_Cost);
    }
    
}