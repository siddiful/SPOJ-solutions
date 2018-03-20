#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mp make_pair
#define pp pair<int,int>
#define INF 1000
using namespace std;

vector< pp >v[1000];int r,c;
char mape[10][10];
vector<int>d;
void ft(int i,int j){
	if(i>0){
		if(j>0){
			v[i*c+j].pb(mp((i-1)*c+j,(mape[i-1][j]==mape[i][j])?(0):(1)));
			v[i*c+j].pb(mp((i)*c+j+1,(mape[i][j+1]==mape[i][j])?(0):(1)));
			v[i*c+j].pb(mp((i+1)*c+j,(mape[i+1][j]==mape[i][j])?(0):(1)));
			v[i*c+j].pb(mp((i)*c+j-1,(mape[i][j-1]==mape[i][j])?(0):(1)));
		}
		else{
			v[i*c+j].pb(mp((i-1)*c+j,(mape[i-1][j]==mape[i][j])?(0):(1)));
			v[i*c+j].pb(mp((i)*c+j+1,(mape[i][j+1]==mape[i][j])?(0):(1)));
			v[i*c+j].pb(mp((i+1)*c+j,(mape[i+1][j]==mape[i][j])?(0):(1)));
		}
	}
	else{
		if(j>0){
			v[i*c+j].pb(mp((i)*c+j+1,(mape[i][j+1]==mape[i][j])?(0):(1)));
			v[i*c+j].pb(mp((i+1)*c+j,(mape[i+1][j]==mape[i][j])?(0):(1)));
			v[i*c+j].pb(mp((i)*c+j-1,(mape[i][j-1]==mape[i][j])?(0):(1)));
		}
		else{
			v[i*c+j].pb(mp((i)*c+j+1,(mape[i][j+1]==mape[i][j])?(0):(1)));
			v[i*c+j].pb(mp((i+1)*c+j,(mape[i+1][j]==mape[i][j])?(0):(1)));
		}
	}
}

int main(){
	int t,n,m,i,j,k;
	scanf("%d",&t);string s;d.assign(1000,INF);
	while(t--){d.clear();
		scanf("%d %d",&r,&c);
		for(i=0;i<r*c;i++)v[i].clear();
		for(i=0;i<r;i++){
			cin>>s;
			for(j=0;j<c;j++)mape[i][j]=s[j];
		}
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			ft(i,j);
		}
	}
	d[0]=0;
	priority_queue< pp,vector<pp>,greater<pp> >pq;pq.push(mp(0,0));
	while(!pq.empty()){
		pp f=pq.top();pq.pop();
		if(d[f.second]<f.first)continue;
		for(i=0;i<v[f.second].size();i++){
			pp l=v[f.second][i];
			if(d[l.first]>d[f.second]+l.second){d[l.first]=d[f.second]+l.second;
			pq.push(mp(d[l.first],l.first));}
		}
	}
	printf("%d\n",d[r*c-1]);
	}
	return 0;
}