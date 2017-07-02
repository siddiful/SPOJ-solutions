#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
	int t,a;ll b;
	scanf("%d",&t);
	while(t--){
		scanf("%d %lld",&a,&b);
		if(b==0)printf("1\n");
		else{
		a=(a%10);
		if(a==0)printf("0\n");
		else if(a==1||a==5||a==6)printf("%d\n",a);
		else{
			if(a==2||a==3||a==7||a==8){
				b=(b%4);
				if(b)printf("%d\n",((int)pow(a,b))%10);
				else printf("%d\n",((int)pow(a,b+4))%10);
			}
			else{
				if((b%2)==0)printf("%d\n",(a==4)?6:1);
				else printf("%d\n",a);
			}
		}
	}}
	return 0;
}