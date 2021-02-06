#include<iostream>
using namespace std;
int main()
{
long n,m,s=2,i=1;
cin>>n>>m;
for(;i<=n;i++)
s=(s*s)%m;
cout<<s%m; 
}
