#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int r,c;
    cin>>r>>c;
    /*if(c>r)
    {
        int x=r;
        r=c;
        c=x;
    }*/

    int h=(c/2)*r;
    if(c%2!=0)
    {
        cout<<h+(r/2);

    }
    else
    {
        cout<<h;
    }

}
