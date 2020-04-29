#include <iostream>

using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int i=1;
    int d=n;
    int op=0;
    int flag=0;
    while(n--)
    {
        if(k>245)
        {
            cout<<0;
            flag=1;
            break;
        }

        int j=5*i;
        op=op+j;


        if((op+k)>240)
        {
            cout<<i-1;
            flag=1;

            break;

        }
        if((op+k)==240)
        {
            cout<<i;
            flag=1;

            break;
        }
        i++;
    }
    if(flag==0)
    {
        cout<<d;
    }
}
