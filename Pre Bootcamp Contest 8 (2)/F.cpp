#include<iostream>
using namespace std;
int main()
{
    int n,x[7],sum=0,loop=0;
    cin>>n;
    for(int i=0;i<7;i++)
    {
        cin>>x[i];
    }
    int i=0;
    while(sum<n)
    {
        sum=sum+x[i];

            loop++;

        if(i==6)
            i=0;
        else i++;
    }

    if(loop%7==0)
        cout<<"7"<<endl;
    else
    {
        loop=loop%7;
        cout<<loop<<endl;
    }



    return 0;
}
