#include<iostream>
using namespace std;
int main()
{
    int n,k,l,c,d,p,nl,np,toast=0;
    cin>>n;
    cin>>k;
    cin>>l;
    cin>>c;
    cin>>d;
    cin>>p;
    cin>>nl;
    cin>>np;

    int totalDrink=k*l;
    int limequan=c*d;

    int drink=totalDrink/nl;
    int salt=p/np;

    if(drink<=limequan && drink<=salt)
        cout<<drink/n;
    else if(limequan<=drink && limequan<=salt)
        cout<<limequan/n;
    else
        cout<<salt/n;

    return 0;
}
