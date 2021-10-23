#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string str = "";
    string castStr;
    for(int i=1 ; n >= str.length() ; i++)
    {
        castStr = to_string(i);
        str = str + castStr;
    }

    cout << str[n-1];

    return 0;
}
