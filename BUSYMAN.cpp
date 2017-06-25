//Author: Siddharth Shukla
//Problem: BUSYMAN


#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mp make_pair
using namespace std;
ll T,N,m,n,i,j,k;

bool comp(pair<ll,pair<ll,ll> > a,pair<ll,pair<ll,ll> > b){
return a.second.second < b.second.second;}

int main(){
scanf("%lld",&T);
while(T--){
scanf("%lld",&N);ll o=0;
vector<pair<ll,pair<ll,ll> > > v;
while(N--){
scanf("%lld %lld",&m,&n);
v.pb(mp(n-m,mp(m,n)));
}
sort(v.begin(),v.end(),comp);
k=v.size();j=0;ll l=0;
while(l!=k){
if(j<=v[l].second.first){
o++;j=v[l].second.second;}
l++;}
printf("%lld\n",o);
}
return 0;}
