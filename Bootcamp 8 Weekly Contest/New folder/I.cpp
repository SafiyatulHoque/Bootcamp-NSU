#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int t,a,b,d;
    double sqrside;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>a;
        cin>>b;
        cin>>d;

        double bc=3.1416*(d/2.0)*(d/2.0);
        sqrside=8.0/sqrt(2);
        double sarea=sqrside*sqrside;
        double sc=3.1416*(sqrside/2)*(sqrside/2);
        bc=bc-sarea;
        sc=4.0*(sc/2.0);

        sc=(sc-bc);
        cout<<sc;
    }
    return 0;
}
