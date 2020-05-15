#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;

    while(t--)
    {
        int flag=0;
        ll a,b,c,d;
        cin>>a>>b;
        cin>>c>>d;
        if(c==a)
        {
            ll g=b+d;
            if(g==a)
            {
                cout<<"YES"<<"\n";
                flag=1;
            }
        }
        if(c==b && flag==0)
        {
            ll g=a+d;
            if(g==b)
            {
                cout<<"YES"<<"\n";
                flag=1;
            }
        }
        if(d==a && flag==0)
        {
            ll g=b+c;
            if(g==d)
            {
                cout<<"YES"<<"\n";
                flag=1;
            }
        }
        if(d==b && flag==0)
        {
            ll g=a+c;
            if(g==d)
            {
                cout<<"YES"<<"\n";

                flag=1;
            }
        }
        if(flag==0)
        {
            cout<<"NO"<<"\n";
        }
    }
}
