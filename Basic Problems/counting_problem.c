#include<stdio.h>
int hcf(int a,int b)
{
    int c,m;
    m=a*b;
    if(a==0||b==0)
        a=a+b;
    else
        while(b!=0)
        {
            c=a%b;
            a=b;
            b=c;
        }
    a=m/a ;
    return a;
}

int main()
{
    long long int t,i,a,b,q,l,r,c,k,z,s,x,m,y;
    scanf("%lld",&t);
    for(i=1; i<=t; i++)
    {   s=0;
        scanf("%lld%lld%lld",&a,&b,&q);
        m=hcf(a,b);
        for(k=1; k<=q; k++)
        {

            scanf("%lld%lld",&l,&r);
            if(r<b)
                printf("%lld\n",s);
            if(r>=b)
            {
                if(m>r)
                {
                    if(l<=b)
                        s=(r-b+1);
                    else
                        s=r-l+1;
                    printf("%lld\n",s);
                }
                else
                {
                    if(m>l)
                    {
                        if(l<=b)
                            s=m-b;
                        else
                            s=m-l;
                    }
                    else
                        s=0;

                    x=m;
                    y=0;
                    while(x<=r)
                    {

                        x=x+b-1;

                        if(x<=r)
                        {
                            x=x+(m-b);
                            if(x>=l)
                            {
                                if(x<(l+m-b))
                                    s=s+x-l;
                                else if((x<=r)&&(x>=(l+m-b)))
                                    s=s+(m-b);
                                else
                                    y=r-(x-(m-b));
                            }
                        }
                    }

                    printf("%lld\n",s+y);
                }

            }

        }
    }
}
