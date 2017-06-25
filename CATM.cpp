//Author: Siddharth Shukla
//Problem: CATM


#include <bits/stdc++.h>
#define ll long long int
#define mp make_pair
#define pb push_back
#define pp pair<int,int>
using namespace std;

int main(){
int n,m,k,x[3],y[3];
scanf("%d %d",&n,&m);
scanf("%d",&k);
while(k--){
scanf("%d %d %d %d %d %d",&x[0],&y[0],&x[1],&y[1],&x[2],&y[2]);
if((abs(x[1]-x[2])==abs(y[1]-y[2])) && (abs(x[0]-x[2])==abs(y[0]-y[2])) && ((x[0]>x[1] && x[0]<x[2])||(x[0]<x[1] && x[0]>x[2])))
printf("NO\n");
else printf("YES\n");}
return 0;}
