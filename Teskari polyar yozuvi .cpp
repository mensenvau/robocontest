#include <iostream>
#include <vector>
using namespace std;

int main()
{
    string s;
    cin>>s;
    
    string sh="",sb="";
    
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='a' && s[i]<='z') sh +=s[i] ;
        if(s[i]=='*' || s[i]=='+' || s[i]=='-' || s[i]=='/' || s[i]=='^') sb +=s[i] ;
        if(s[i]==')') {  sh+=sb[sb.size()-1] ; sb.erase(sb.size()-1,1); }
    }
    
    cout<<sh;
} 
