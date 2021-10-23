#include<iostream>
using namespace std;
 
int main()
{
    
    string str;
    cin>>str;
    int len = str.length();
    char ch = str[len-1];
    if(ch == '5' || ch == '0' )
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
 
}