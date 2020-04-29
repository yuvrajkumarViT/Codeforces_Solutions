#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int good=0;
    int flag=0;
    int bad=0;
    int goodc=0;
    int badc=0;
    int curr=arr[0];
    if(n>1)
    {
        if(arr[1]>curr)
        {
            good=arr[1];
            goodc++;
            bad=arr[0];

        }
        if(arr[1]<curr)
        {
            bad=arr[1];
            badc++;
            good=arr[0];
        }
        if(arr[1]==arr[0])
        {
            good=arr[0];
            bad=arr[0];
        }


        for(int i=2;i<n;i++)
        {
            if(arr[i]>good)
            {
                good=arr[i];
                goodc++;
            }
            if(arr[i]<bad)
            {
                bad=arr[i];
                badc++;
            }


        }
        cout<<goodc+badc;
        flag=1;






    }
    if(n==1)
    {
        cout<<0;
    }


}
