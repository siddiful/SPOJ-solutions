//Author: Siddharth Shukla
//Problem: FUNPROB


#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mp make_pair
using namespace std;
ll N,M;

int main(){
scanf("%lld %lld",&N,&M);
while(N!=0 || M!=0){
if(N>M || M==0)cout<<"0.000000\n";
else {
double ans=(double)(M-N+1)/(double)(M+1);
printf("%.6f\n",ans);}
scanf("%lld %lld",&N,&M);
}
return 0;}
