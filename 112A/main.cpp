#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s1;
    string s2;
    cin>>s1;
    cin>>s2;
    int co=0,coo=0;
    for(int i=0;i<s1.length();i++)
    {
        s1[i]=tolower(s1[i]);

    }
    for(int i=0;i<s2.length();i++)
    {
        s2[i]=tolower(s2[i]);

    }

    if(s1<s2)
    {
        cout<<"-1";
    }
    if(s1>s2)
    {
        cout<<"1";
    }
    if(s1==s2)
    {
        cout<<"0";
    }

}
