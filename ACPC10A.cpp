//Author: Siddharth Shukla
//Problem: ABA12C


#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mp make_pair
using namespace std;
ll a1,a2,a3,i,j,k;

int main(){
scanf("%lld %lld %lld",&a1,&a2,&a3);
while(a1!=a2){
if(2*a2 == a1+a3)
printf("AP %lld\n",2*a3-a2);
else
printf("GP %lld\n",a3*(a3/a2));
scanf("%lld %lld %lld",&a1,&a2,&a3);
}
return 0;}
