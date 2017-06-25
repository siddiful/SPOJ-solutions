//Author: Siddharth Shukla
//Problem: GIRLSNBS


#include <iostream>
#include <cmath>
using namespace std;

int main() {
	// your code goes here
	int G,B;
	cin>>G>>B;
	while(G!=-1 && B!=-1)
	{
		if(G==B)
		{
			if(G==0)cout<<0<<endl;
			else cout<<1<<endl;
		}
		else if(G==0 || B==0)
		{
			if(G==0)cout<<B<<endl;
			else cout<<G<<endl;
		}
		else
		{
			if(G>B)
			{
				cout<<ceil((double)G/(B+1))<<endl;
			}
			else
			{
				cout<<ceil((double)B/(G+1))<<endl;
			}
		}
		cin>>G>>B;
	}
	return 0;
}
