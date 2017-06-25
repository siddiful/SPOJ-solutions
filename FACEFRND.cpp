//Author: Siddharth Shukla
//Problem: FACEFRND


#include <bits/stdc++.h>
#define ll long long int
#define pb push_back

using namespace std;
ll k,i,p,q,r,N,M;
int main(){
scanf("%lld",&N);
vector<ll> f;set<ll>ff;
while(N--){
scanf("%lld %lld",&k,&i);f.pb(k);
while(i--){
scanf("%lld",&p);ff.insert(p);
}
}
while(!ff.empty()){
if(find(f.begin(),f.end(),*(ff.begin()))==f.end())r++;
ff.erase(ff.begin());
}
printf("%lld\n",r);
return 0;}
