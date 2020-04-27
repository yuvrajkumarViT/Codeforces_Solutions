#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    int counter=0;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int ac=0;
        int bc=0;
        int cc=0;

        if(a==1)
            ac++;
        if(b==1)
            bc++;
        if(c==1)
            cc++;
        if((cc+bc+ac)>=2)
            counter++;


    }
    cout<<counter<<"\n";

}
