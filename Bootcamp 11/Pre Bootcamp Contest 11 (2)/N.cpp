#include <iostream>
using namespace std;

int main()
{
    long long n,m,max,min,div;
    cin>>n;
    cin>>m;
    max=(n-m+1)*(n-m)/2;
    if(n%m==0){
        div=n/m;
        min=((div*(div-1))/2)*m;
    }
    else{
        div=(n/m);
        min=((div*(div-1))/2)*(m-(n%m));
        min+=(((div+1)*div)/2)*(n%m);
    }
    cout<<min<<" "<<max<<endl;
    return 0;
}
