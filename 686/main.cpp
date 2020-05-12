#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n,x;
    cin>>n>>x;
    int arr[1001];
    int f=0;
    arr[f++]=x;
    for(int i=0;i<n;i++)
    {
        char c;
        int d;

        cin>>c>>d;
        if(c=='+')
        {
            arr[f++]=d;
        }
        else
        {
            arr[f++]=d*(-1);
        }
    }
    for(int i=0;i<f;i++)
    {
        cout<<arr[i];
    }
}
