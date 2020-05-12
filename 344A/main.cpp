#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin>>n;
    ll arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    ll c=0;
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]!=arr[i+1])
            c++;
    }
    cout<<c+1;
}
