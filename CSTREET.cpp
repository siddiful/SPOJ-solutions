#include <bits/stdc++.h>
#define pb push_back
#define ll long long int
#define pp pair<int,int>
#define mp make_pair
using namespace std;

vector<int> p,rank;
vector<pair<int,pp > >g;
ll findpar(ll i){
return ((p[i]==i)?i:(findpar(p[i])));}

bool isameset(ll i,ll j){return findpar(i)==findpar(j);}

void unions(ll i,ll j){
if(!isameset(i,j)){
ll x=findpar(i);ll y=findpar(j);
if(rank[x]>rank[y])p[y]=x;
else {p[x]=y;if(rank[x]==rank[y])rank[y]++;}}
else return;
}

int main(){
int t;
scanf("%d",&t);
while(t--){
int n,m,i,j,k,a,b,c,pr;
ll mc=0;
scanf("%d",&pr);
scanf("%d",&m);
scanf("%d",&n);//n-edges m-vertices
p.assign(m,0);rank.assign(m,0);
for(i=0;i<m;i++){p[i]=i;rank[i]=0;}
for(i=0;i<n;i++){
scanf("%d %d %d",&a,&b,&c);g.pb(mp(c,mp(a,b)));}
sort(g.begin(),g.end());
for(i=0;i<n;i++){
if(!isameset(g[i].second.first,g[i].second.second)){
mc+=g[i].first;unions(g[i].second.first,g[i].second.second);
}
}
printf("%lld\n",mc*pr);}
return 0;}
