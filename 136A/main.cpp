#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    int i=0;
    int op[n];
    while(n--)
    {
        cin>>arr[i++];
    }

    for(int k=0;k<i;k++)
    {
        int j=arr[k];
        op[j-1]=k+1;
    }
    for(int k=0;k<i;k++)
    {
        cout<<op[k]<<" ";
    }

}
