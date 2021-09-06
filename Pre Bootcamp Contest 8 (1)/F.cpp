#include<iostream>
using namespace std;
int main()
{
    int T,N;
    cin>>T;

    for(int i=0;i<T;i++)
    {
        cin>>N;
        int sum=0;
        while(N!=0)
        {
            int rem=N%10;
            N=N/10;
            sum=sum+rem;
        }
        cout<<sum<<endl;
    }
    return 0;
}
