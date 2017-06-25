//Author: Siddharth Shukla
//Problem: STPAR


#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;

int main(){
ll n,i,j,k;
scanf("%lld",&n);
while(n){

stack<ll> s;j=1;
for(i=0;i<n;i++){
scanf("%lld",&k);
if(k==j){j++;
while(!s.empty() && s.top()==j){
s.pop();j++;
}}
else s.push(k);
}
if(s.empty())printf("yes\n");
else printf("no\n");
scanf("%lld",&n);
}
return 0;}
