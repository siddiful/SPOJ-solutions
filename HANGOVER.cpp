//Author: Siddharth Shukla
//Problem: HANGOVER


#include <bits/stdc++.h>
#define ll long long int
#define pb push_back

using namespace std;
int main(){
float c,j,k;ll t,i,N;
scanf("%f",&c);
while(c){
j=0;k=2;N=0;
do{
j+=(1/k);
k++;N++;
}while(j<c);
printf("%lld card(s)\n",N);
scanf("%f",&c);
}
return 0;}
