#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin>>n;
    string s1="I hate ";
    string s2="I love ";
    string op="";
    string f="it";
    string bet="that ";
    for(int i=0;i<n;i++)
    {
        if(i!=0)
        {
            op.append(bet);
        }
        if(i%2==0)
        {
            op.append(s1);
            continue;
        }
        if(i%2!=0)
        {
            op.append(s2);
            continue;
        }
    }
    cout<<op.append(f);
}
