#include<bits/stdc++.h>
using namespace std;
int main()
{
    int year,flag=0;
    while(cin>>year)
    {
        if(flag==1)
            cout<<endl;
        flag=1;
        if((((int)(year%4)==0 && (int)(year%100)!=0) || (int)(year%400)==0) && (int)(year%55)==0)
        {
            cout<<"This is leap year."<<endl;
            if((int)(year%15==0))
                cout<<"This is huluculu festival year."<<endl;
            cout<<"This is bulukulu festival year."<<endl;
        }
        else if((int)(year%15==0))
        {
            if(((int)(year%4)==0 && (int)(year%100)!=0) || (int)(year%400)==0)
                cout<<"This is leap year."<<endl;
            cout<<"This is huluculu festival year."<<endl;
        }
        else if(((int)(year%4)==0 && (int)(year%100)!=0) || (int)(year%400)==0)
            cout<<"This is leap year."<<endl;
        else
            cout<<"This is an ordinary year."<<endl;
    }
    return 0;
}
