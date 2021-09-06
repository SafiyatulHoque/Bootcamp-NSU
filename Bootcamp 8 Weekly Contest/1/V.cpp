#include<bits/stdc++.h>
using namespace std;

long long gcd(long long a,long long b)
{
    return b==0?a:gcd(b,a%b);
}
int main()
{
    long long n,k,m=1;
    cin>>n>>k;
    while(k--)
        m*=10;
    cout<<(n*m/gcd(n,m));
    return 0;
}
