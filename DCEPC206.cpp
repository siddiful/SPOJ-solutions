#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long int
#define pp pair<int,int>
using namespace std;

int mg(int v[],int l,int m,int r){
	int p=0;
	int i=l;int j=m;
	int a[r-l+1];int k=0;
	while(i<m && j<=r){
		if(v[i]<=v[j]){a[k++]=v[i++];}
		else{
			a[k++]=v[j++];
			p+=((m-i+1)*v[j]);
		}
	}
	while(i<m)a[k++]=v[i++];
	while(j<=r)a[k++]=v[j++];
	for(i=l;i<=r;i++)v[i]=a[i];
	return p;
}

int ms(int v[],int l,int r){
	int p=0;
	if(l<r){
		int m=l+(r-l)/2;
		p=ms(v,l,m);
		p+=ms(v,m+1,r);
		p+=mg(v,l,m+1,r);
	}
	return p;
}

int main(){
	int t,n,i,j,k;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);int v[n];
		for(i=0;i<n;i++)scanf("%d",&v[i]);
		int d=ms(v,0,n-1);
	cout<<d<<"\n";
	}
	return 0;
}