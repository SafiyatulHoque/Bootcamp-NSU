#include<iostream>
using namespace std;
int main()
{
    int x,y,z;

    while(true)
    {
        cin>>x>>y>>z;
        if(x==0 && y==0 && z==0)
            return 0;

        if(x>z) swap(x,z);
        if(y>z) swap(y,z);

        if((x*x+y*y) == z*z)
            cout<<"right"<<endl;
        else
            cout<<"wrong"<<endl;
    }
    
    return 0;
}