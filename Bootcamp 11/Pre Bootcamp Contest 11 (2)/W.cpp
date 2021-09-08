#include<iostream>
using namespace std;
int main()
{
    double s[10][4];
    double x,y;
    int count=0;
    double m=9999.9;
    int loop=0;
    char ch;

    while(true)
    {
        cin>>ch;
        if(ch=='*')
            break;
        if(ch=='r')
        {
            cin>>s[loop][0];
            cin>>s[loop][1];
            cin>>s[loop][2];
            cin>>s[loop][3];
            loop++;
        }

    }

    while(true)
    {
        cin>>x>>y;
        if(x==m && y==m)
        {
            break;
        }

        count++;
        int judge=0;

        for(int i=0; i<loop; i++)
        {

            if(x>s[i][0] && x<s[i][2] && y<s[i][1] && y>s[i][3])
            {
                cout<<"Point "<<count<<" is contained in figure "<<(i+1)<<endl;
                judge++;
            }
        }

        if(judge==0)
            cout<<"Point "<<count<< " is not contained in any figure"<<endl;

    }
    return 0;
}
