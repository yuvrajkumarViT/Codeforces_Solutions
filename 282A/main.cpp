#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin>>n;
    ll x=0;
    for(int i=0;i<n;i++)
    {
        string ip;
        cin>>ip;
        if(ip=="++X"||ip=="X++")
            x++;
        else
            x--;

    }
    cout<<x;

}
