#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int main()
{
    string gname, rhost, shuf;
    cin >> gname >> rhost >> shuf;
    string newstr = gname + rhost ;
    sort(newstr.begin() , newstr.end());
    sort(shuf.begin() , shuf.end());

    if(newstr == shuf) cout << "YES";
    else cout << "NO";
}