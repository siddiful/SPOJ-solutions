//Author: Siddharth Shukla
//Problem: FCTRL


#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll ans,i,T,N;

int main(){
scanf("%lld",&T);
while(T--){
scanf("%lld",&N);ans=0;ll k=5;
while(k<=N){
ans+=(N/k);k*=5;}
printf("%lld\n",ans);
}
return 0;}
