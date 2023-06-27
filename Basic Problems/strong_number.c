#include<stdio.h>
int main()
{
    int n,s,i,k,x,t,a,b;
scanf("%d%d",&a,&b);
for(n=a;n<=b;n++)
{t=n;
x=0;
while(t!=0){
    k=t%10;
    t=t/10;
    s=1;

    for(i=1;i<=k;i++)
        s=s*i;
    x=x+s;
}
if(x==n)
    printf("%d ",n);
}












}
