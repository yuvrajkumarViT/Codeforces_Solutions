#include <bits/stdc++.h>

using namespace std;


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    int arr[n];
    int sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum=sum+arr[i];
    }
    sort(arr,arr+n,greater<int>());
    sum=sum-arr[0];
    int co=1;
    int t=arr[0];

    if(sum<arr[0])
    {
        cout<<1;
    }
    else
    {
        for(int i=1;i<n;i++)
        {
            sum=sum-arr[i];
            t=t+arr[i];
            if(t>sum)
            {
                cout<<i+1;
                break;
            }

        }
    }

}
