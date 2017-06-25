//Author: Siddharth Shukla
//Problem: UPDATEIT


#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll a[1000000],bt[1000000];
ll getSum(ll bt[],ll in){
	ll sum=0;
	in++;
	while(in>0){
		sum+=bt[in];
		in-=(in & (-in));
	}
	return sum;
}

void update(ll bt[],ll n,ll in,ll val){
	in++;
	while(in<=n){
		bt[in]+=val;
		in+=(in & (-in));
	}
}
int main(){
ll t,n,u,l,r,val,q,c;
scanf("%lld",&t);
while(t--){
	scanf("%lld %lld",&n,&u);
	for(ll i=1;i<=n;i++)
	bt[i]=0;
	bt[0]=0;
	while(u--){
		scanf("%lld %lld %lld",&l,&r,&val);
		update(bt,n,l,val);
		update(bt,n,r+1,-val);
	}
	cin>>q;
	while(q--){
		scanf("%lld",&c);
		printf("%lld\n",getSum(bt,c));
	}
}
return 0;}

