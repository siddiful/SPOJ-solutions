//Author: Siddharth Shukla
//Problem: ONP


#include <bits/stdc++.h>
#define ll long long int
#define pb push_back

using namespace std;
ll t,i,j,k;
int main(){
scanf("%lld",&t);
stack<char> s;string p;
map<char,ll> m;
m['+']=1;m['-']=2;m['*']=3;m['/']=4;m['^']=5;m['(']=0;
while(t--){
cin>>p;j=p.length();
for(i=0;i<j;i++){
if(p[i]=='(')s.push(p[i]);
else if(p[i]>=97 && p[i]<=122){
printf("%c",p[i]);}
else if(p[i]>=42 && p[i]<=94){
while(m[s.top()]>=m[p[i]]){
printf("%c",s.top());s.pop();}
s.push(p[i]);
}
else{
while(m[s.top()]!=0){
printf("%c",s.top());s.pop();}
s.pop();
}
}
printf("\n");
}
return 0;}
