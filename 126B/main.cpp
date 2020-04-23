#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    float arr[n];
    float k=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        k=k+(arr[i]/100);

    }

    cout<<(k/n)*100;




    return 0;
}
