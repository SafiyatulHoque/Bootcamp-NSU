#include<iostream>
#include<cmath>
#include<stdio.h>
using namespace std;
const double pi = 2*acos(0.0);

int main()
{
    int T;
    double r;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        cin>>r;
        double rec=(r*2.0)*(r*2.0);
        double cir=pi*r*r;
        printf("Case %d: %.2lf\n",i+1,rec-cir);
    }
    return 0;
}
