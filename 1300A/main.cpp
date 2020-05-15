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
        ll n;
        cin>>n;
        ll arr[n];
        int co=0;
        int co_o=0;

        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            if(x==0)
            {
                co_o++;
                arr[i]=1;
                co=co+arr[i];

            }
            else
            {
                arr[i]=x;

                co=co+arr[i];
            }

        }
        if(co==0)
        {
            co_o++;
            cout<<co_o<<"\n";
        }
        else
        {
            cout<<co_o<<"\n";
        }

    }


}
