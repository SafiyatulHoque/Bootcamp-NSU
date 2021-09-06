#include<iostream>
#include<string>
using namespace std;

int main()
{
    int n,s1,s2,c=0;
    string str1,str2;
    cin>>n;
    cin>>s1;
    cin>>s2;

    //s1=stoi(str1);
    //s2=stoi(str2);

    for(int i=0;i<n;i++)
    {
        int n1=s1%10;
        int n2=s2%10;
        if(n1==n2) continue;
        for(int j=n1;n1!=n2;j++)
        {
            if(j==10) j=0;
            c++;
        }
        s1=s1/10;
        s2=s2/10;
    }
    return 0;
}