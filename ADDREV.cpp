//Author: Siddharth Shukla
//Problem: ADDREV


#include <bits/stdc++.h>
#include <cstring>
#define ll long long int
#define pb push_back
#define pp pair<ll,ll>
#define mp make_pair
using namespace std;
ll N;

int main(){
scanf("%lld",&N);
while(N--){
ll a,b,c=0;
scanf("%lld %lld",&a,&b);
stack<ll> p,q;
while(a || b){
if(a==0){q.push(b%10);b/=10;}
else if(b==0){p.push(a%10);a/=10;}
else{
q.push(b%10);b/=10;p.push(a%10);a/=10;
}
}
ll n=0;ll s=max(p.size(),q.size())-1;
while(!p.empty() || !q.empty()){ll g=1;
for(int i=1;i<=s;i++)g*=10;
if(p.empty()){n+=((q.top()+c)%10)*(g);c=(q.top()+c)/10;q.pop();s--;}
else if(q.empty()){n+=((p.top()+c)%10)*(g);c=(p.top()+c)/10;p.pop();s--;}
else{n+=((p.top()+q.top()+c)%10)*(g);
c=(p.top()+q.top()+c)/10;
p.pop();q.pop();s--;}
}
if(c!=0)n=(n*10)+c;
printf("%lld\n",n);
}
return 0;}
