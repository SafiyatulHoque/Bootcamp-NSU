#include<iostream>
#include<set>
using namespace std;
int main()
{
    int Q;
    cin>>Q;
    set<int>s;
    for(int i=0;i<Q;i++)
    {
        int y,x;
        cin>>y;
        cin>>x;
        if(y==1)
        {
            s.insert(x);
        }
        else if(y==2)
        {
            s.erase(x);
        }
        else if(y==3)
        {
            auto it=s.find(x);
            if(it!=s.end())
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }
    }
    return 0;
}
