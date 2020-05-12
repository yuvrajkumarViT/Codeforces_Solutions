#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
          int c=0,pos=0,pos2=0,i=0;
          string s;
        cin>>s;
        for(i=0; i<s.length(); i++)
        {
            if(s[i]=='1')
            {

                pos=i;
                break;
            }
        }
        for(i=s.length(); i>=pos; i--)
        {
            if(s[i]=='1')
            {
                pos2=i;
                break;
            }
        }
        for(i=pos; i<pos2; i++)
        {
            if(s[i]=='0')
                c++;

        }

        cout<<c<<endl;
    }
}
