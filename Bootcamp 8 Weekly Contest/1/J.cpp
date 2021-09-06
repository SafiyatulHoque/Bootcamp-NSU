#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int r,x,y,xr,yr;
    cin>>r>>x>>y>>xr>>yr;
    double distance=sqrt(pow(yr-y,2.0)+pow(xr-x,2.0));
    cout<<(int)(ceil)(distance/r/2)<<endl;;
    return 0;
}
