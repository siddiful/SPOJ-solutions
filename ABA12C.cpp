//Author: Siddharth Shukla
//Problem: ABA12C


#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mp make_pair
using namespace std;


int main(){
int C,N,K,i,j,k;
scanf("%d",&C);
while(C--){
scanf("%d %d",&N,&K);
int c[K+1],dp[K+1],ans=0;dp[0]=0;
for(i=1;i<=K;i++)
{scanf("%d",&c[i]);dp[i]=c[i];}k=K;
for(i=1;i<=K;i++){
for(j=1;j<=i;j++){
if(c[j]!=-1){
dp[i]=min(dp[i],c[j]+dp[i-j]);}
}}
printf("%d\n",dp[K]);
}
return 0;}
