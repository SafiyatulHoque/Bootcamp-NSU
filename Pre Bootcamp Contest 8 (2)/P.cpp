#include<iostream>
using namespace std;
int main()
{
    int a, b, c, d, e;

    while(true)
    {
        cin>>a;
        cin>>b;
        cin>>c;
        cin>>d;
        cin>>e;
        if(a+b+c+d+e == 0)
            break;
        cout<<a*b*c*d*d*e*e<<endl;
    }
    return 0;
}
