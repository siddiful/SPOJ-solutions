#include <bits/stdc++.h>
#define ll int
using namespace std;

int main(){
	ll T,S,C,i,j,k,c,a,b;ll x[101][101];
	scanf("%d",&T);
	while(T--){
		scanf("%d %d",&S,&C);c=C;
		memset(x,-1,sizeof(x));
		for(i=1;i<=S;i++)scanf("%d",&x[1][i]);
			if(S==1){k=1;i=2;}
		for(k=2;k<=S;k++){
			j=0;
			for(i=1;i<=S-k+1;i++){
				x[k][i]=x[k-1][i+1]-x[k-1][i];
				if(i>1 && !j && x[k][i]!=x[k][i-1])j++;
			}
			if(!j){a=k-1;b=i;break;}
		}
		while(c--){x[k][i]=x[k][i-1];i++;}
		if(S>1){
		for(i=a;i>=1;i--){
			j=b;
			while(x[i+1][j]!=-1){x[i][j+1]=x[i][j]+x[i+1][j];j++;}
			b++;
		}}
		for(i=1;i<=C;i++)printf("%d ",x[1][S+i]);
			printf("\n");
	}
	return 0;
}