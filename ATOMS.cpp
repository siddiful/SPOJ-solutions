//Author: Siddharth Shukla
//Problem: ATOMS


#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mp make_pair
using namespace std;

int main(){
ll P,i,j;long double N,K,M;
scanf("%lld",&P);
while(P--){
scanf("%Lf %Lf %Lf",&N,&K,&M);
if(M<N)printf("0\n");
else
printf("%d\n",(int)((log(M/N))/(log(K))));
}
return 0;}
