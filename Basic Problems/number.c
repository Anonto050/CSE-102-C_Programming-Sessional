#include<stdio.h>
int main()
{
    int n,a,t,c;
    scanf("%d%d",&n,&a);
    c=0;
    while(n!=0)
    {
        t=n%10;
        n=n/10;
        if(t==a)
            c++;

    }
    if(c>0)
    {
        printf("Yes,it has the digit\n");
        printf("%d",c);
    }
    else
        printf("Digit is not in the number");
    return 0;
}
