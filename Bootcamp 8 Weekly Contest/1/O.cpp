#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=0,i,len,r,ot=0,c=0;
    string s;
    cin>>s;
    len=s.size();
    for(i=0; i<len; i++)
    {
        if(s[i]=='a')
            a++;
        else
            ot++;
    }
    if(a>ot)
        cout<<a+ot<<endl;
    else if(a==ot)
        cout<<a+ot-1<<endl;
    else
    {
        while(1)
        {
            ot--;
            if(a>ot)
            {
                c=1;
                break;
            }
        }
        if(c==1)
            cout<<a+ot<<endl;
    }
    return 0;
}
