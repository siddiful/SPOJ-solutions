#include <bits/stdc++.h>
#define ll long long int
using namespace std;
vector<int> v;
bool comp(int a,int b){
	return a>=b;
}
int main(){
	int n,k,s,i=0,j;
	scanf("%d %d %d",&n,&k,&s);
	v.assign(n,0);
	for(i=0;i<n;i++)scanf("%d",&v[i]);
	j=k*s;i=0;
	sort(v.begin(),v.end(),comp);
	while(j>0){
		i++;j-=v[i-1];
	}
printf("%d\n",i);
	return 0;
}