#include<iostream>
#include<map>
using namespace std;
int main()
{
    int Q;
    cin>>Q;
    map<string,int>m;
    for(int i=0;i<Q;i++)
    {
        int qtype,y;
        string x;
        cin>>qtype;

        if(qtype==1)
        {
            cin>>x;
            cin>>y;

            auto it=m.find(x);
            if(it!=m.end())
            {
                m[x]+=y;
            }
            else
                m.insert(make_pair(x,y));
        }
        else if(qtype==2)
        {
            cin>>x;
            m.erase(x);
        }
        else if(qtype==3)
        {
            cin>>x;
            auto it=m.find(x);
            if(it!=m.end())
                cout<<it->second<<endl;
            else
                cout<<"0"<<endl;
        }
    }
    return 0;
}
