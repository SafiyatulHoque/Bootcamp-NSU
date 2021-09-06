#include<iostream>
using namespace std;
int main()
{
    int y;
    cin>>y;
    for(int i=y+1;;i++)
    {
        int p1,p2,p3,p4;
        p1=i%10;
        p2=(i/10)%10;
        p3=(i/100)%10;
        p4=i/1000;
        if(p1!=p2 && p1!=p3 &&p1!=p4 && p2!=p3 && p2!=p4 && p3!=p4)
        {
            cout<<i;
            break;
        }
    }
    return 0;
}
