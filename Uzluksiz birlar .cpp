#include<bits/stdc++.h>
using namespace std;
int main()
{

   string a;
   cin>>a;
   
   int l=0,k=0;
   
   for(int i=0;i<a.size();i++)
   {
      if(a[i]=='1') { l=1; } 
      if(l==1 && a[i]=='0') { k=2;} 
      if(k==2 && a[i]=='1') { cout<<"NO"; return 0; }
   }
   
   cout<<"YES";
 
}
