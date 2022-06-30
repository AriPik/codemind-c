#include<stdio.h>
main() {
   char str[20],str1[20],res[20];    
   long int n1,n2,n3;
   scanf("%ld%ld",&n1,&n2);
   sprintf(str, "%ld", n1); 
   sprintf(str1, "%ld", n2);
   n3=n1*n2;
   sprintf(res, "%ld", n3);
   printf("%s",res);
   return 0;
}