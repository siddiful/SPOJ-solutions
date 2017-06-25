//Author: Siddharth Shukla
//Problem: NSTEPS


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long int N,i,x,y;
	cin>>N;
	while(N--)
	{
		cin>>x>>y;
		if(x==y)
		{
			if(x%2==0)
			cout<<x+y<<endl ;
			else
			cout<<x+y-1<<endl ;
		}
		else if(x!=y)
		{
			if(x%2==0 && y==x-2)
			cout<<x+y<<endl;
			else if(x%2!=0 && y==x-2)
			 cout<<x+y-1<<endl ;
			 else
			 cout<<"No Number\n";
		}
		
	}
	return 0;
}
