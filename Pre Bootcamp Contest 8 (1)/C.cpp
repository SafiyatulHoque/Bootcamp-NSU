#include<iostream>
using namespace std;
int main()
{
    int T,A,B,C;
    cin>>T;
    for(int i=0;i<T;i++)
    {
            cin>>A;
            cin>>B;
            cin>>C;
            if((A>B && A<C)||(A<B && A>C))
                cout<<A<<endl;
            else if((B>A && B<C) || (B<A && B>C))
                cout<<B<<endl;
            else
                cout<<C<<endl;
    }
    return 0;
}
