#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int x[n];
    for(int i=0;i<n;i++)
    {
        cin>>x[i];
    }
    int sum=0;
    int flag=1;
    while(flag==1)
    {
        flag=0;
        sort(x,x+n);

        for(int j=n-1;j>0;j--)
        {
            if((x[j]-x[j-1])<=0)
            {
                continue;
            }
            else
            {
                x[j]=x[j]-x[j-1];
                flag=1;
            }

        }
        sum=0;
        for(int i=0;i<n;i++)
            sum=sum+x[i];

    }
    cout<<sum<<endl;

    return 0;
}
