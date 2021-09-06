#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int t;
    long long n,sum,ps,ans;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        n;
        cin>>n;
        sum=0;
        ps=0;
        ans=n*(n+1)/2;
        for(int j=1;j<=n;j=j*2)
        {
            ps=ps+j;
        }
        sum=ans-2*ps;
        cout<<sum<<endl;
    }
    return 0;
}

