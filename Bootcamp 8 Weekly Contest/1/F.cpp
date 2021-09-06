#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    string s;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>s;
        int count=0;
        int len=s.size();

        int jj=0,kk=0,zero=0,backz=0;
        for(int j=0,k=len-1;j<len;j++,k--)
        {
            if(s[j]=='0' && jj==0)
                zero++;
            else
                jj=1;

            if(s[k]=='0' && kk==0)
                backz++;
            else
                kk=1;
            if(jj==1 && kk==1)
                break;
        }

        for(int j=zero;j<len-backz;j++)
        {
            if(s[j]=='0')
                count++;
        }
        cout<<count<<endl;
    }
    return 0;
}
