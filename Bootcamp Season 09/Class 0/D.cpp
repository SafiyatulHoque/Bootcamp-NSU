#include<iostream>
#include<string>
using namespace std;

int main()
{
    char str1,str2;
    cin>>str1;
    cin>>str2;
    int t;
    cin>>t;
    int n;
    n=t;
    int x;
    x=n%4;
    cout<<x;
    if(x%2==0)
        cout<<"undefined";
    else if(x==1)
        cout<<"cw";
    else if(x==3) cout<<"ccw";

    return 0;
}
