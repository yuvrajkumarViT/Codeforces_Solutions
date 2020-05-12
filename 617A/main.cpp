#include<bits/stdc++.h>

using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin>>n;
    if(n==1)
    {
        cout<<1;

    }


    else if(n==2)
    {
        cout<<1;

    }
    else if(n==3)
    {
        cout<<1;

    }
    else if(n==4)
    {
        cout<<1;

    }
    else if(n==5)
     {
        cout<<1;

    }
    else
    {
        int x=n/5;
        int h=n%5;
        if(h==0)
        {
            cout<<x;


        }
        else
        {
            cout<<x+1;

        }
    }
}
