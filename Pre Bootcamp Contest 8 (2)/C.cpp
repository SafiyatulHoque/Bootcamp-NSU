#include<iostream>
using namespace std;

int main()
{
    long long n,k,num;
    cin>>n;
    cin>>k;
    int loop=0;
    for(int i=0;i<n;i++)
    {
        cin>>num;
        if(num%k==0)
            loop++;
    }
    cout<<loop<<endl;
    return 0;
}
