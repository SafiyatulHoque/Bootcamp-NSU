#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int gcd (unsigned long long int  x, unsigned long long int  y)
{
    if (x == 0)
        return y;
    return gcd( y%x  , x);
}

int main()
{
    unsigned long long int  x,y;
    cin>>x;
    cin>>y;
    if (x == y)
        cout<<x;
    else
       cout << gcd(x,y);
    return 0;

}