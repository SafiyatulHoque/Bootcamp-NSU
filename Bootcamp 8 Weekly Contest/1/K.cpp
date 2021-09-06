#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,a,b,ans;
    cin>>n>>a>>b;
    b=b%n;
    if(b<0)
        ans=n+b+a;
    else
        ans=a+b;

    if(ans%n==0)
        cout<<n<<endl;
    else
        cout<<ans%n<<endl;
    return 0;
}
