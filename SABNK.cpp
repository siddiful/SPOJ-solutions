#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mp make_pair
using namespace std;
vector<string> s;
int main(){
	ll t,n,i,j,k;string sa;
	scanf("%lld",&t);
	while(t--){
		scanf("%lld",&n);k=n;
		s.assign(n,"");map<string,int> m;
		while(k--){
			cin>>sa;s.pb(sa);m[sa]++;
		}
		i=1;sort(s.begin(),s.end());sa=s[0];
		cout<<sa<<" "<<m[sa]<<"\n";
		while(i!=n){
			if(s[i]==sa){i++;continue;}
			else {sa=s[i];cout<<sa<<" "<<m[sa]<<"\n";i++;}
		}
		printf("\n");
	}
	return 0;
}