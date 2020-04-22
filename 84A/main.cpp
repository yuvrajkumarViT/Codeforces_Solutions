#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    long long int t;
    int i=0;
    cin>>t;
    long long int arr[32];
    while(t>0)
    {
        arr[i++]=t%10;
        t=t/10;

    }



    int c=0;
    for(int l=0;l<i;l++)
    {


        if(arr[l]==4||arr[l]==7)

         {

              c++;


         }


    }

    if(c==4||c==7)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}
