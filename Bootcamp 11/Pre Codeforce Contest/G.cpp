#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;
    int len = str.length();
    int lenj=len-1;

    for(int i=0 , j=lenj; i<len && j>=0 ;i++,j--)
    {
        if(str[i] == str[j])
            continue;
        else
        {
            for(int k=i+1;k<j;k++)
            {
                if(str[i]==str[k])
                {
                    char ch;
                    ch = str[k];
                    str[k]=str[j];
                    str[j]=ch;
                }
                    
            }
        }
    }
    string rev;
    
    rev = str;
    reverse(rev.begin(), rev.end());

    if(rev == str)
    {
        cout<<str;
    }
    else
        cout<<"NO SOLUTION";


    return 0;

}