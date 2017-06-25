//Author: Siddharth Shukla
//Problem: ZSUM


#include <iostream>
#define ll long long int
using namespace std;

int expo(ll base,ll exp,ll m)
{
	ll ans=1;
	while(exp>0)
	{
		if(exp%2==1)
		{
			ans=(ans*base)%m;
		}
		base=(base*base)%m;
		exp=exp/2;
	}
	return ans;
}

int main() {
	ll n,k;
	ll m=10000007;
	cin>>n>>k;
	while(n!=0 && k!=0)
	{
		cout<<(2*(expo(n-1,k,m))%m + 2*(expo(n-1,n-1,m))%m + expo(n,k,m) + expo(n,n,m)%m)%m<<endl ;
		cin>>n>>k;
	}
	return 0;
}
