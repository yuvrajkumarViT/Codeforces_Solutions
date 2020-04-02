#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,i;
cin>>n;
string s;
cin>>s;
int m=0;

for(i=0;i<n;i++)
{
if(s[i]%2==0)
m+=i+1;
}
cout<<m<<"\n";
}
