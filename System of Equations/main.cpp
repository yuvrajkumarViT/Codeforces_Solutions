#include<bits/stdc++.h>

using namespace std;

int main()
{
    int c=0;
    int m;
    int n;

    cin>>m>>n;

    for(int i=0;i<1000;i++)
    {
        for(int j=0;j<1000;j++)
        {
            if(i*i+j==m && j*j+i==n)
                c++;
        }
    }
    cout<<c;


}
