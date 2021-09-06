#include<iostream>
using namespace std;
int main()
{
    float n[10],xl[10],yl[10],xr[10],yr[10];
    int loop=0;
    char ch;
    for(int i=0;i<10;i++)
    {
        cin>>ch;
        if(ch=='*')
            break;
        cin>>xl[i];
        cin>>yl[i];
        cin>>xr[i];
        cin>>yr[i];
        loop++;
    }
    float x,y;
    int count=0;

    cin>>x;
    cin>>y;
    while((x!=9999.9) && (y!=9999.9))
    {
        int judge=0;
        if(count!=0)
        {
            cin>>x;
            cin>>y;
        }

        if(x==9999.9 && y==9999.9)
        {
            cout<<x<<" "<<y;
            return 0;
        }

        count++;
        for(int i=0;i<loop;i++)
        {

            if(x>xl[i] && x<xr[i] && y<yl[i] && y>yr[i])
            {
                cout<<"Point "<<count<<" is contained in figure "<<(i+1)<<endl;
                judge++;
            }

        }

        if(judge==0)
                cout<<"Point "<<count<< " is not contained in any figure "<<endl;

    }
    return 0;

}
