#include<iostream>

using namespace std;

int main()
{
    int n,s,d,t1,t2;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>s; cin>>d;
        t1=(s+d)/2;
        t2=s-t1;
        if(t1<0 || t2<0 || (s+d)%2!=0 || (s-d)%2!=0)
            cout<<"impossible"<<endl;
        else
            cout<<t1<<" "<<t2<<endl;
    }
    return 0;
}
