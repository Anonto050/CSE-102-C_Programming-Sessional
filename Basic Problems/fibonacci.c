#include<stdio.h>
int main(){
int n,c,a,b,s;
scanf("%d",&n);
a=0;
b=1;
s=0;

for(c=1;c<=n;c++)
{

    printf("%d ",a);
    s=a+b;
    a=b;
    b=s;

}








}
