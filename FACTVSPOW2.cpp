#include <bits/stdc++.h>
#define ll double
#define pi 3.141592653589793238462643383
using namespace std;

int bis(int l,int r,int a){
int b=(l+r)/2;
ll x=log(pow((b/a),b)*exp(-b)*sqrt(2*pi*b));
if(x>0)bis(l,b,a);
else if(x<0)bis(b+1,r,a);
else return b+1;
}

int main()
{
	int t,i,j,k;
int a;
scanf("%d",&t);
while(t--){
scanf("%d",&a);
printf("%d\n",bis(4,3*a,a));
}
	return 0;
}