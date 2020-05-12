#include<bits/stdc++.h>

using namespace std;

int main()
{
	char s[101];

	cin>>s;
	 int l  = strlen(s);
	sort(s,s+l);
	 int co =0;
    for(int i=0; i<l; i++)
    {
        if(s[i] != s[i+1])
        {
            co++;
        }
    }
    if(co%2==0)
    {
        cout<<"CHAT WITH HER!\n";
    }
    else
    {
        cout<<"IGNORE HIM!\n";
    }
}
