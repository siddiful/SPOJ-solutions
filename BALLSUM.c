//Author: Siddharth Shukla
//Problem: BALLSUM


#include<stdio.h>
/*using namespace std;
map<long long int ,long long int>s;*/
long long int gcd(long long int a,long long int b)
{
    if(b==0)
        return a;
    else
        return gcd(b,a%b);
}
int main()
{
    long long int k,n,i,j,v,a,b;
    scanf("%lld%lld",&n,&k);
    while(k!=-1 && n!=-1)
    {
        v=0;
        if(k%2!=0)
        {
            v=k/2;
            v=v*v;
        }
        else
        {
            v=k/2-1;
            v+=v*v;
        }
        if(v==0)
            printf("0\n");
        else{
            a=n*(n-1)/2;
            b=gcd(a,v);
            a=a/b;
            v=v/b;
            if(v==a)
                printf("1\n");
            else
                printf("%lld/%lld\n",v,a);
        }
        scanf("%lld%lld",&n,&k);
    }
    return 0;
}
