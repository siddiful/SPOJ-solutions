//Author: Siddharth Shukla
//Problem: BYTESM2.cpp


#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;
ll s[105][105],dp[105][105];
int main(){
int T,h,w,i,j;
scanf("%d",&T);
while(T--){ll k=-1;
scanf("%d %d",&h,&w);
for(i=0;i<h;i++){
for(j=0;j<w;j++){
scanf("%lld",&s[i][j]);if(i==0)dp[i][j]=s[i][j];}
}
for(i=1;i<h;i++){
for(j=0;j<w;j++){
if(j==0)dp[i][j]=s[i][j]+max(dp[i-1][j],dp[i-1][j+1]);
else if(j==w-1)dp[i][j]=s[i][j]+max(dp[i-1][j],dp[i-1][j-1]);
else dp[i][j]=s[i][j]+max(dp[i-1][j],max(dp[i-1][j-1],dp[i-1][j+1]));
}}
for(i=0;i<w;i++)k=max(k,dp[h-1][i]);
printf("%lld\n",k);
}
return 0;}
