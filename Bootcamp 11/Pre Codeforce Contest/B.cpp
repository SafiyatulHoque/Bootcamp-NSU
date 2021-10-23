#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cin>>a;
    cin>>b;
    if(a%b==0)
        cout<<a/b;
    else
        cout<<(a/b)+1;    
    return 0;

}