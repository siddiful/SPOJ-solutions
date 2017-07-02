#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define MAXI 1000000
long long int prime[MAXI+1];
void seive()
{
	prime[0]=1;
	prime[1]=1;
	for(long long int i=2;i<=MAXI;i++)
	{
		if(!prime[i])
		{
			prime[i]=i;
			for(long long int j=i;j*i<=MAXI;j++)
			{
				prime[i*j]=i;
			}
		}
	}

}

long long int euler(long long int n)
{
	long long int result=1;
	while(n>1)
	{
		int p=prime[n];
		int e=0;
		for(;n%p==0;n=n/p,e++);

			result=result*(p-1)*pow((double)p,e-1);

	}
	return result;
}

int main()
{
    freopen("test.txt","r",stdin);
    seive();
	int t;
	scanf("%d",&t);
	while(t--)
    {
        long long int n;
        scanf("%lld",&n);
        printf("%lld\n",euler(n));
    }
	return 0;
}