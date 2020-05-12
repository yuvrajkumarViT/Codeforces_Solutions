#include <bits/stdc++.h>

using namespace std;
#define ll long long

int findGCD(ll a,ll b)
{
    if (b == 0)
        return  a;
    return  findGCD(b, a % b);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll a,b,n;
    cin>>a>>b>>n;
    int co=1;
    while(1)
    {
        if(co%2!=0)
        {
            ll x= findGCD(a,n);
            n=n-x;
            if(n<0)
            {
                cout<<"1";
                break;
            }

        }
        if(co%2==0)
        {
            ll x = findGCD(b,n);
            n=n-x;
            if(n<0)
            {
                cout<<"0";
                break;
            }
        }
        co++;
    }


}
