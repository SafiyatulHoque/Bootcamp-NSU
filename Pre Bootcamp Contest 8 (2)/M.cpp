#include<iostream>
using namespace std;

int main()
{
    int T;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        long long x,y;
        long long loop=0,ct=0;
        cin>>x;
        cin>>y;
        for(long long i=x;i<=y;i++)
        {
            long long m=i;
            while(m!=0)
            {
                long long rem=m%10;
                if(rem==0)
                {
                    loop++;
                    break;
                }

                m=m/10;
            }
            ct++;
        }
        cout<<loop<<"/"<<ct<<endl;
    }
    return 0;
}
