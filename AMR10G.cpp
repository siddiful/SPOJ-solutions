//Author: Siddharth Shukla
//Problem: AMR10G


#include <bits/stdc++.h>
#include <cstring>
#define ll long long int
#define pb push_back
#define pp pair<ll,ll>
#define mp make_pair
using namespace std;
ll N,T,K,i,j;

int main(){
scanf("%lld",&T);
while(T--){
scanf("%lld %lld",&N,&K);
vector<ll> h;
for(i=0;i<N;i++){
cin>>j;h.pb(j);}
sort(h.begin(),h.end());
ll k=h[K-1]-h[0];
for(j=1;j<=N-K;j++){
k=min(k,h[j+K-1]-h[j]);}
printf("%lld\n",k);
}
return 0;}
