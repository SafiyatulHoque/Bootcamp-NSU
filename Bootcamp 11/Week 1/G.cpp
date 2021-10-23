#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int loop = 0;
    for(int i=0; i<str.length(); i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
            loop++;
    }
    cout<<loop+1;
    return 0;
}