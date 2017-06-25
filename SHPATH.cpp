//Author: Siddharth Shukla
//Problem: SHPATH


#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define pp pair<int, ll>
#define ll long long int
using namespace std;
int main(){
ll s,n,p,nr,r,cost;vector<ll>dist;
vector< pp >g[10004];
scanf("%lld",&s);
while(s--){
scanf("%lld",&n);
for(int i=0;i<=n;i++)g[i].clear();
map<string,ll>m;string nm,t,u;
for(int i=1;i<=n;i++){
cin>>nm;m[nm]=i;
scanf("%lld",&p);
for(int j=1;j<=p;j++){
scanf("%lld %lld",&nr,&cost);g[i].pb(mp(nr,cost));}}
scanf("%lld",&r);
while(r--){dist.assign(n+1,INT_MAX);
cin>>t>>u;dist[m[t]]=0;
priority_queue<pp,vector< pp >,greater< pp > > pq;
pq.push(mp(0,m[t]));
while(!pq.empty()){
pp t=pq.top();pq.pop();
if(t.first>dist[t.second])continue;
for(int i=0;i<g[t.second].size();i++){
if(dist[g[t.second][i].first]>dist[t.second]+g[t.second][i].second)
{dist[g[t.second][i].first]=dist[t.second]+g[t.second][i].second;
pq.push(mp(dist[g[t.second][i].first],g[t.second][i].first));}
}
}
printf("%lld\n",dist[m[u]]);
}
}
return 0;}
