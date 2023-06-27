#include<stdio.h>
int main()
{
    int n,c,k,i,t,p,z,s;
    scanf("%d",&n);
    p=n;
    z=0;
    while(p!=0)
    {
        p=p/16;
        z++;
    }
    for(i=z; i>0; i--)
    {
        s=n;
        for(k=i-1; k>0; k--)
        {
            s=s/16;
        }
        t=s%16;
        if(t<10)
            printf("%d",t);
        else
            printf("%c",t+55);
    }












}
