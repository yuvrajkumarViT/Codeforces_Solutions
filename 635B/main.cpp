#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long t;
	cin >> t;
	while (t--)
	{
		long long h, n, m;
		cin >> h >> n >> m;
		while ((h > (h/2)+10) && (n>0))
		{
			h = (h/2)+10;
			n--;
		}
		if (h <= 10*m) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}
