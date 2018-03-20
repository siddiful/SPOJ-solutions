#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mp make_pair
#define pp pair<int,int>
using namespace std;
char m[20][20];int w,h,i,j,k,n;
struct pt{
	int a;
	pp b;
};
int bf(int i,int j){
	queue<pt>q;q.push(pt(0,i));
	while(true){
		pt f=q.front();q.pop();
		if(f.b==j)return f.a;
		int u=(f.b).first,v=(f.b).second;
		if(u-1>=0 && m[u-1][v]!='x'){q.push(pt(f.a+1,mp(u-1,v)));}
		if(v+1<w && m[u][v+1]!='x'){q.push(pt(f.a+1,mp(u,v+1)));}
		if(u+1<h && m[u+1][v]!='x'){q.push(pt(f.a+1,mp(u+1,v)));}
		if(v-1>=0 && m[u][v-1]!='x'){q.push(pt(f.a+1,mp(u,v-1)));}
	}
}

int tsp(int pos,int msk){
	if(msk==((1<<n)-1))return dt[pos][0];
	for(int nt=0;nt<n;nt++){
		if(nt!=pos && !(msk & (1<<nt)))
			dps[pos][msk]=min(dt[pos][nt] + tsp(nxt,msk | (1<<nt)));
	}
}

int main(){
	scanf("%d %d",&w,&h);
	while(w!=0){string s;pp sp;vector<pp>dp;
		for(i=0;i<h;i++){
			cin>>s;
			for(j=0;j<w;j++){
				m[i][j]=s[j];
				if(s[j]=='o')sp=mp(i,j);
				if(s[j]=='*')dp.pb(mp(i,j));
			}
		}
		dp.pb(sp);reverse(dp.begin(),dp.end());
		n=dp.size();
	int dt[n][n];
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			dt[i][j]=dt[j][i]=bf(i,j);
		}
	}
	for(i=0;i<n;i++)dt[i][i]=0;
	int dps[n][(1<<n)-1];
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			dps[i][1<<j]=dt[i][j];
		}
	}
	tsp(0,1);
	
	scanf("%d %d",&w,&h);}
	return 0;
}