//Author: Siddharth Shukla
//Problem: POUR1


#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mp make_pair
using namespace std;

ll pour(ll A,ll B,ll C){
ll mv=1;ll a=A,b=0;
while(a!=C && b!=C){
ll t=min(a,B-b);
b+=t;a-=t;mv++;
if(a==C || b==C){break;}
if(a==0){a=A;mv++;}
if(b==B){b=0;mv++;}
}
return mv;
}

int main(){
ll t,a,b,c;
scanf("%lld",&t);
while(t--){
scanf("%lld",&a);scanf("%lld",&b);scanf("%lld",&c);ll d=__gcd(a,b);
if(c>max(a,b) || (c%d)!=0)printf("-1\n");
else{
if(c==a || b==a)printf("1\n");
else{
printf("%lld\n",min(pour(a,b,c),pour(b,a,c)));
}
}}
return 0;}
