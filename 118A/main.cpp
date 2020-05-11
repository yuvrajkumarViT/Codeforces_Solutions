#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s1;
    cin>>s1;
    cin.ignore();
    string s2;
    cin>>s2;
    int t1=s1.length();
    int t2=s2.length();
    int arr[100000]={0};
    int f=0;
    int flag=0;
    if(t1!=t2)
        cout<<"NO"<<"\n";


    else
    {
        for(int i=0;i<t1;i++)
        {
            if(s1[i]!=s2[i])
                arr[f++]=i;

        }
        if(f!=2)
        {
            cout<<"NO"<<"\n";
            flag=1;

        }
        else
        {
            int he1=arr[0];
            int he2=arr[1];
            char h1=s1[he1];
            char h2=s1[he2];
            char h3=s2[he1];
            char h4=s2[he2];

            if(h1==h4 && h2==h3)
                cout<<"YES"<<"\n";
            else
            {
                cout<<"NO"<<endl;
            }
        }


    }
}
