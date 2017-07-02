#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mp make_pair
using namespace std;
vector<ll> v;map<ll,ll>m;
int main(){
	ll t,n,i,j,k;
	scanf("%lld",&t);
	while(t--){k=0;
		scanf("%lld",&n);m.clear();
		v.assign(n+1,0);v[0]=0;m[0]++;
		for(i=1;i<=n;i++){scanf("%lld",&j);v[i]=j+v[i-1];m[v[i]]++;}
		for(map<ll,ll>::iterator it = m.begin();it != m.end();it++){
			if((it->second)>1)k+=((it->second)*(it->second -1))>>1;
		}
		printf("%lld\n",k);
	}
	return 0;
}