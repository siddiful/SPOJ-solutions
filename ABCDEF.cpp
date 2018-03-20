#include <bits/stdc++.h>
#define pb push_back
#define pp pair<int,int>
#define ll long long int
#define mp make_pair
using namespace std;

int main()
{
	int n,i,j;
	scanf("%d",&n);
	//int a[n],b[n],c[n],d[n],e[n],f[n];
	vector<int> v;v.assign(n,0);
	for(i=0;i<n;i++)scanf("%d",&v[i]);
	vector<ll>lhs;vector<ll>rhs;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			for(int k=0;k<n;k++){
				lhs.pb(v[i] * v[j] + v[k]);
				if(v[k]!=0) rhs.pb((v[i]+v[j])*v[k]);
			}
		}
	}
	sort(lhs.begin(), lhs.end());sort(rhs.begin(), rhs.end());
	vector<ll>::iterator lll,lr,rl,rr;
	ll c=lhs.size();ll d=0;
	for(i=0;i<c;i++){
		lll=lower_bound(lhs.begin(), lhs.end(),lhs[i]);
		lr=upper_bound(lhs.begin(), lhs.end(),lhs[i]);
		rl=lower_bound(rhs.begin(), rhs.end(),lhs[i]);
		rr=upper_bound(rhs.begin(), rhs.end(),lhs[i]);
		i=(lr-lhs.begin())-1;
		if(rl!=rhs.end())
		d+=((lr-lll)*(rr-rl));
	}
	printf("%lld\n",d);
	return 0;
}