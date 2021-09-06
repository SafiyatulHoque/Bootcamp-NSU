#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int A,B,flag=0;
    cin>>A;
    cin>>B;

    for(int i=0;i<A||i<B;i++)
    {
        if(abs(A-i)==abs(B-i))
        {
            flag=1;
            cout<<i<<endl;
            break;
        }
    }
    if(flag==0)
        cout<<"IMPOSSIBLE"<<endl;
    return 0;
}
