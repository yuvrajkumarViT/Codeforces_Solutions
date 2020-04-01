#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n;i++)
    {
        int j;
        cin>>j;
        arr[i]=j;

    }

   int c=0;
   for(int k=0;k<n-1;k++)
   {
       if(arr[k]>=arr[k+1])
        c=c+1;


   }
   int f=c+1;
   cout<<f<<"\n";
   for(int k=0;k<n-1;k++)
   {
       if(arr[k]>=arr[k+1])
       {
           c=c+1;
        cout<<arr[k]<<" ";
       }


   }
   cout<<arr[n-1];


    return 0;
}
