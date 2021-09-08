#include<iostream>
using namespace std;
int main()
{
    int N,sum=0;
    cin>>N;
    int num[N];
    for(int i=0;i<N;i++)
    {
        cin>>num[i];
        sum=sum+num[i];
    }
    cout<<sum<<endl;
    return 0;
}
