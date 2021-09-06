#include<iostream>

using namespace std;

int main()
{
    int t,n;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        int result=((((((n*567)/9)+7492)*235)/47)-498)/10;
        result=result%10;

        cout<<abs(result)<<endl;
    }
    return 0;
}
