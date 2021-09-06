#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int count=0,test;
    int total=n*n;
    if(n%2==0)
        cout<<total/2<<endl;
    else
    {

        for(int i=0;i<n;i++)
        {
            if(i%2==0)
            {
                test=(ceil)(n/2.0);
                count=count+test;
            }
            else
            {
                test=(floor)(n/2.0);
                count=count+test;
            }
        }
        cout<<count<<endl;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(j%2==0 && i%2==0)
                cout<<"C";
            else if(j%2==1 && i%2==1)
                cout<<"C";
            else
                cout<<".";
        }
        cout<<endl;
    }
    return 0;
}
