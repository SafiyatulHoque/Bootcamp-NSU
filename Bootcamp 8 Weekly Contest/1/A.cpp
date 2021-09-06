#include<iostream>
#include<string>
using namespace std;

int main()
{
    int n,c=0;
    string str1,str2;
    cin>>n;
    cin>>str1;
    cin>>str2;

    for(int i=0;i<n;i++)
    {
        int n1=str1[i]-'0';
        int n2=str2[i]-'0';
        if(n1==n2) continue;
        int f=0;
        for(int j=n1,k=n1;j!=n2 && k!=n2;j++,k--)
        {
            if(j==10) j=0;
            if(k==-1) k=9;
            if(j==n2 || k==n2) break;
            f++;
        }
        c=c+f;
    }
    cout<<c;
    return 0;
}
