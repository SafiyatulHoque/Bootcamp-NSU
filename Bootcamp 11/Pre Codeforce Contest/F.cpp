#include<iostream>
using namespace std;

int main()
{
    
    string str;
    cin>>str;
    int len = str.length();
    int zero = 0;
    int one = 0;

    for(int i=0;i<len;i++)
    {
        if(str[i] == '0')
            zero++;
        if(str[i] == '1')
            one++;
    }
    if(zero>one)
        cout<<one*2;
    else
        cout<<zero*2;

    return 0;

}