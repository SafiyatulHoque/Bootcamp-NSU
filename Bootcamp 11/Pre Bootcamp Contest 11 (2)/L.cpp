#include<bits/stdc++.h>

using namespace std;
int gcd(int a,int b)
{
     if (a == 0 || b == 0)
       return 0;

    if (a == b)
        return a;

    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}
int main()

{

    int n,b,i;
    cin>>n;
    for(i=n/2;i>=1;i--)
    {
        b=gcd(i,n-i);
        if(b==1)
        {
            break;
        }
    }
    cout<<min(i,n-i)<<" "<<max(i,n-i)<<endl;
    return 0;
}
