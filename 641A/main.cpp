#include<bits/stdc++.h>

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
	    ll n,k;
		cin>>n>>k;
		ll i=0;

		for(i=2;i<=n;i++)
		{
			if(n%i==0)
			break;
		}
		n=n+i;
		n=n+2*(k-1);
		cout<<n<<"\n";
	}
}
