#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,x;
    cin>>n;
    cin>>k;
    int loop=0;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(x%k==0)
            loop++;
    }
    cout<<loop;
    return 0;
}
