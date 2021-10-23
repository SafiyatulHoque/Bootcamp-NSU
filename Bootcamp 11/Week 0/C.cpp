#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    for(int i=0; i<str.length();i+=2)
    {
        for(int j=i+2; j<str.length();j+=2)
        {
            if(str[i]>str[j])
            {
                swap(str[i],str[j]);
            }
        }
    }
    cout<<str;
    return 0;
}