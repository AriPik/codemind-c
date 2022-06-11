#include <stdio.h>
#include <math.h>
  int isPerfectSquare(int x)
    {
       int s = (int)sqrt(x); 
       return (s*s == x);
     }  
   int isFibonacci(int x)
      {
         return isPerfectSquare(5*x*x + 4) ||
           isPerfectSquare(5*x*x - 4);
     }
    int main(void)
    { 
        int n;
        scanf("%d",&n);
        if (n>0)
        {
            if (isFibonacci(n))
            {
                printf("True");
            }
            else
            {
                printf("False");
            }
        } 
	return 0;        
   }