#include <iostream>

using namespace std;

int main()
{
   string s1="BWBWBWBW";
   string s2="WBWBWBWB";
   int n=8;
   int flag=0;
   string s;

   while(n--)
   {
       cin>>s;



       if(s==s1||s==s2)
       {


           flag++;

       }

   }
   if(flag==8)
   {
       cout<<"YES";
   }
   else
   {
       cout<<"NO";
   }


}
