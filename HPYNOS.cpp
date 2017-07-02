#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mp make_pair
using namespace std;

ll sq(ll n){
	ll s=0;
	while(n){s+=(n%10)*(n%10);n/=10;}
	return s;
}

int main(){
	ll N,i=0,j,k;
	scanf("%lld",&N);
	ll l=N,h=l;
	do{
		l=sq(l);h=sq(sq(h));i++;
	}while(l!=h);
	if(l==1)printf("%lld\n",i);
	else printf("-1\n");
	return 0;
}