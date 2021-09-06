#include<iostream>
using namespace std;
int main()
{
    int t,d1,d2,m1,m2,y1,y2,age=-1;
    char ch;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>d1;
        cin>>ch;
        cin>>m1;
        cin>>ch;
        cin>>y1;
        cin>>d2;
        cin>>ch;
        cin>>m2;
        cin>>ch;
        cin>>y2;

        if(d1<d2)
            m2=m2+1;
        if(m1<m2)
            y2=y2+1;
        age=y1-y2;
        if(age>130)
            cout<<"Case #"<<i+1<<": Check birth date"<<endl;
        else if(age<0)
            cout<<"Case #"<<i+1<<": Invalid birth date"<<endl;
        else
            cout<<"Case #"<<i+1<<": "<<age<<endl;

    }
    return 0;
}
