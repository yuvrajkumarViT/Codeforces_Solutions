#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll a,b,c;
    cin>>a>>b>>c;
    int h1=sqrt((a*b)/c);
    int h2=sqrt((c*b)/a);
    int h3=sqrt((a*c)/b);
    cout<<4*(h1+h2+h3);
}
