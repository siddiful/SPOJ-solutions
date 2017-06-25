//Author: Siddharth Shukla
//Problem: HISTOGRA


#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mp make_pair
#define pp pair<ll,ll>
using namespace std;

vector<ll>h;
int main(){ll n,t,i,j,k;
scanf("%lld",&n);
while(n){h.clear();ll ta=0,ans=0;
for(i=0;i<n;i++){
scanf("%lld",&j);h.pb(j);}
stack<ll> s;i=0;
while(i<n){
if(s.empty()|| h[s.top()]<=h[i])
s.push(i++);
else{
k=s.top();s.pop();
ta=h[k]*((s.empty()?(i):(i-1-s.top())));
if(ta>ans)ans=ta;
}
}
while(!s.empty()){
k=s.top();s.pop();
ta=h[k]*((s.empty()?(i):(i-1-s.top())));
if(ta>ans)ans=ta;
}
printf("%lld\n",ans);
scanf("%lld",&n);}
return 0;}
