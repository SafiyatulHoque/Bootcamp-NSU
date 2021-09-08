#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s[200],p[100],r;
    int n,k,q;
    while(cin>>n)
    {
       getchar();
        for(int i=0;i<n;i++)
        {
            getline(cin,s[i]);
            getline(cin,p[i]);
        }
        cin>>q;
       getchar();
        while(q!=0)
        {
            getline(cin,r);
            for(int i=0;i<n;i++)
            {
                if(s[i]==r)
                {
                    cout<<p[i]<<endl;
                    break;
                }
            }
            q--;
        }
        if(q==0)
            break;
    }
 return 0;
}
