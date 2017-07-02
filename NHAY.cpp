#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mp make_pair
#define mx 100010
using namespace std;
char T[mx];char P[mx];
int n,m;
vector<int>b;
void kmpre(){
	int i=0,j=-1;b[0]=-1;
	while(i<m){
		while(j>=0 && P[i]!=P[j])j=b[j];
		i++;j++;
		b[i]=j;
	}
}

void kmp(){
	int i=0,j=0;
	while(i<n){
		while(j>=0 && T[i]!=P[j])j=b[j];
		i++;j++;
		if(j==m){
			printf("%d\n",i-j);
			j=b[j];
		}
	}
}
int main(){
	while(true){
	scanf("%d",&m);b.assign(m+1,-2);
	scanf("%s",P);scanf("%s",T);
	n=sizeof(T)/sizeof(T[0]);
	kmpre();kmp();
	printf("\n");}
	return 0;
}

