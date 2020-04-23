#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;

    while(t--)
    {
        cin.ignore();
        string y;
        cin>>y;

        int j=y.length();

        if(j>10)
        {
            char k=y[j-1];
            char a=y[0];
            cout<<a<<j-2<<k<<endl;


        }
        else
        cout<<y<<endl;

    }

    return 0;
}
