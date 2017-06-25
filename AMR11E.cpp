//Author: Siddharth Shukla
//Problem: AMR11E


#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;
bitset<10000010> bs;
ll ss;
vector<int>primes;

void sieve(ll n){
bs.set();
ss=n+1;bs[0]=bs[1]=0;
for(ll i=2;i<=ss;i++)
if(bs[i]){
for(ll j=i*i;j<=ss;j+=i)bs[j]=0;
primes.pb(i);
}}

int main(){int n;
ll T,i,j,p,k;sieve(100000);k=primes.size();j=1;ll ans[1002];
for(i=30;i<=3000;i++){
int x=0;
for(p=0;p<k;p++){if(!(i%primes[p]))x++;if(x==3){ans[j++]=i;break;}}
if(j==1001)break;
}
scanf("%lld",&T);
while(T--){
scanf("%d",&n);
printf("%lld\n",ans[n]);
}
return 0;}
