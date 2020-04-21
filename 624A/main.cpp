#include<bits/stdc++.h>
using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
		b-=a;
		if(b>0)
		{
			cout<<2-b%2<<endl;
		}
		else if(b)
		{
			cout<<1-b%2<<endl;
		}
		else cout<<0<<endl;
    }
}
