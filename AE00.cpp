//Author: Siddharth Shukla
//Problem: AE00


#include <bits/stdc++.h>
#include <cstring>
#define ll long long int
#define pb push_back
#define pp pair<ll,ll>
#define mp make_pair
using namespace std;
ll N,i,j,k;

int main(){
scanf("%lld",&N);
k+=N;
if(N>=4){
for(j=4;j<=N;j++)
for(i=2;i*i<=j;i++)
if((j%i)==0)k++;}
cout<<k<<"\n";
return 0;}
