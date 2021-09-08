#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    int q,p;
    for(int i=0;i<T;i++)
    {
        cin>>q>>p;
        if(q>1000)
            printf("%0.6lf\n",(double)(q*p)*(90.0/100.0));
        else
            printf("%0.6lf\n",(double)(q*p));
    }
    return 0;
}
