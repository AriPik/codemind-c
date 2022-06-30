#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100],str2[100],str3[100];
    int i,j,n,temp;
    scanf("%[^
]s",str1);
    scanf(" %[^
]s",str2);
    strcat(str1,str2);
    n=strlen(str1);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(str1[i]>str1[j])
            {
                temp=str1[i];
                str1[i]=str1[j];
                str1[j]=temp;
            }
        }
    }
    printf("%s",str1);
    return 0;
}