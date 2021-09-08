#include<iostream>
using namespace std;
int main()
{
    int T,N,R;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        cin>>N;
        R=0;
        while(N!=0)
        {
            int rem=N%10;
            N=N/10;
            R=R*10+rem;
        }
        cout<<R<<endl;
    }
    return 0;
}
