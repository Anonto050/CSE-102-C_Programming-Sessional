#include<stdio.h>

int main()
{
    int n,c,s,t,k,i;
    scanf("%d",&n);
    for(c=0;c<n;c++)
    {
        for(i=1;i<=(n-c-1);i++)
            printf(" ");
         s=1;
         t=c;
       for(k=1;k<=c+1;k++)
       {
           printf("%d ",s);
           s=(s*t)/k ;
           t--;

       }

      printf("\n");






    }
}

