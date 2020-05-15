#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n,k;
    cin>>n>>k;
    ll arr[n];
    for(ll i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int re=arr[k-1];
    int co=0;

    for(ll i=0;i<n;i++)
    {
        if(arr[i]>=re && arr[i]>0)
        {
            co++;
        }
    }
    cout<<co<<"\n";

}
