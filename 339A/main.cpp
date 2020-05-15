#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin>>s;
    int a=0,b=0,c=0;
    int arr[101];
    int count=0;
    for(int i=0;i<s.length();i++)
    {
        arr[count++]=s[i]-'0';
        i++;
    }
    sort(arr,arr+count);
    if(count==1)
    {
        cout<<arr[0];
    }
    else
    {
        for(int i=0;i<count-1;i++)
        {
            cout<<arr[i];
            cout<<"+";
        }
        cout<<arr[count-1];


    }


}

