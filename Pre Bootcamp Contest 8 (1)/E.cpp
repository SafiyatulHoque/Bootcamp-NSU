#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int a,b;
    for(int i=0;i<t;i++)
    {
        cin>>a;
        cin>>b;
        if(a>b)
            cout<<">"<<endl;
        else if(a<b)
            cout<<"<"<<endl;
        else if(a=b)
            cout<<"="<<endl;
    }
    return 0;
}
