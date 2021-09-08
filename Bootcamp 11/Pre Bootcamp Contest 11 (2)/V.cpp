#include<bits/stdc++.h>
using namespace std;
#define pi  3.1415926535897
int main()
{
    vector<double> a(3);
    while(cin>>a[0]>>a[1]>>a[2])
    {
        sort(a.begin(),a.end());
        double s=(a[0]+a[1]+a[2])/2;
        double tArea=sqrt(s*(s-a[0])*(s-a[1])*(s-a[2]));
        double cRadius=(a[0]*a[1]*a[2])/(4*tArea);
        double cArea=pi*pow(cRadius,2);
        double iCRadius=tArea/s;
        double iCArea=pi*pow(iCRadius,2);
        double tReduced=tArea-iCArea;
        cArea-=tArea;
        printf("%.4lf %.4lf %.4lf\n",cArea,tReduced,iCArea);

    }
    return 0;
}
