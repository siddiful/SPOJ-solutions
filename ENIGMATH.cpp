//Author: Siddharth Shukla
//Problem: ENIGMATH


#include <bits/stdc++.h>
#define pb push_back
#define ll long long int
#define pp pair<int,int>
#define mp make_pair
using namespace std;


int main(){
ll T,A,B;
scanf("%lld",&T);
while(T--){
scanf("%lld %lld",&A,&B);
ll t=__gcd(A,B);
printf("%lld %lld\n",(B/t),(A/t));
}
return 0;}
