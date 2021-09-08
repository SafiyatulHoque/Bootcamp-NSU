#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long long mod=1000000007;
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        long long n;
        cin>>n;
        cout<<"Case #"<<i+1<<": "<<pow(2,n-1)*n<<endl;
    }
    return 0;
}
