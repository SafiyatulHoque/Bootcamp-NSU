#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    string a;
    long long int b,n,k,j;
    for(int i=1;i<=t;i++)

    {
        cin>>a;
        cin>>b;
        int len=a.size();

        if(a[0]=='-')
            j=1;

        else
            j=0;

        if(b<0)
            b=b*(-1);

         n=0;
         for(k=j;k<len;k++)
         {
             n=(a[k]-'0')+n*10;
             n=n%b;
         }
         if(n)
             cout<<"Case "<<i<<": not divisible"<<endl;
          else
             cout<<"Case "<<i<<": divisible"<<endl;
         }

         return 0;
    }
