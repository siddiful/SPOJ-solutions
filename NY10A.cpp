//Author: Siddharth Shukla
//Problem: NY10A


#include <bits/stdc++.h>
#include <string>
#define ll long long int

using namespace std;

int main(){
ll P,N,i,j,k;string s;
scanf("%lld",&P);
while(P--){
scanf("%lld",&N);
cin>>s;
map<string,ll> m;
for(i=0;i<38;i++){
m[s.substr(i,3)]++;
}
printf("%lld %lld %lld %lld %lld %lld %lld %lld %lld\n",N,m["TTT"],m["TTH"],m["THT"],m["THH"],m["HTT"],m["HTH"],m["HHT"],m["HHH"]);
}
return 0;}
