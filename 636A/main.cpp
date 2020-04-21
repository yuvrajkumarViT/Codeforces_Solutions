#include <bits/stdc++.h>

using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        int d=0;
        int k;
        cin>>n;
        int j=0;

        for(k=2;k<n;k++)
        {
            j=pow(2,k-1);
            d=j+d;



            if(n%(1+d)==0 && n/(1+d)>0)
            {




                break;
            }




        }

        cout<<n/(1+d)<<endl;





    }
    return 0;
}
