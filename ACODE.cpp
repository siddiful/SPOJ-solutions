//Author: Siddharth Shukla
//Problem: ABA12C


#include <bits/stdc++.h>
#define ll long long int
#define pb push_back

using namespace std;
vector<ll> dp;
int main(){
string s;
cin>>s;
while(s!="0"){
int n=s.length();
dp.assign(n+1,0);
dp[1]=1;dp[0]=1;
for(int i=2;i<=n;i++){
if(((s[i-2]-'0')*10+(s[i-1]-'0'))>26){
dp[i]=dp[i-1];}
else{
if(s[i-1]=='0'){dp[i]=dp[i-2];}
else if(s[i-2]=='0'){dp[i]=dp[i-1];}
else dp[i]=dp[i-1]+dp[i-2];}
}
printf("%lld\n",dp[n]); 
cin>>s;}
return 0;}
