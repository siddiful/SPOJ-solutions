//Author: Siddharth Shukla
//Problem: CDRSANJ


#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mp make_pair
using namespace std;

int main(){
int x;
scanf("%d",&x);
if((x%2)==1)printf("0\n");
else{vector<ll>a;a.assign(x+1,-1);a.pb(0);a.pb(1);
ll b=(log(x))/(log(2)),l=2;
for(int i=1;i<=b;i++){
int s=1<<i;int d=2*s;
for(int j=s;j<=x;j+=d)a[j]=l;
l+=2;
if(a[x]!=-1){printf("%lld\n",a[x]);break;}
}
}
return 0;}
