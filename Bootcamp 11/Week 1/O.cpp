#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    string str1,str2,str3;
    cin>>str1;
    cin>>str2;
    int len1,len2,len3;
    len1 = str1.length();
    len2 = str2.length();
 
    if(len1>len2) len3 = len1;
    else len3 = len2;
 
    for(int i=0; i<len3; i++)
    {
        if( (len1+len2)%2 == 0 )
            cout<<  str1[i] << str2[i];
        else
            {
                if(i==len3-1)
                    cout<<str1[i];
                else
                    cout<<  str1[i] << str2[i];
            }
    }
 
}
