#include<stdio.h>
int main()
{
    int n,c,i,t,x,y,z,s;
    scanf("%d",&n);
    for(c=1;c<=(n/2) ;c++){
            z=0;

        for(i=1;i<=c;i++){
          t=c%i;

          if(t==0)
           z++;

           }
           x=0;
       for(s=1;s<=(n-c);s++){
        y=(n-c)%s;
        if(y==0)
            x++;


       }
       if((z==2)&&(x==2))
        printf("%d=%d+%d\n",n,c,(n-c));







    }







}
