#include<iostream>
using namespace std;
int main()
{
    int x,y,z;
    cin>>x;
    cin>>y;
    cin>>z;
    for(int i=0;;i++)
    {
        if(i!=0)
        {
        cin>>x;
        cin>>y;
        cin>>z;
        }
        if(x==0 && y==0 && z==0)
            break;
        if((x*x+y*y)==z*z || (x*x+z*z)==y*y || (y*y+z*z)==x*x)
            cout<<"right"<<endl;
        else
            cout<<"wrong"<<endl;
    }
    return 0;
}
