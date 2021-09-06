#include<iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        int N;
        cin>>N;
        char str[N];
        cin>>str;
        int r=0,g=0,b=0;
        int max=0;
        for(int i=0;str[i]!='\0';i++)
        {
            if(str[i]=='R')
                r++;
            if(str[i]=='G')
                g++;
            if(str[i]=='B')
                b++;

            if(max<r) max=r;
            if(max<g) max=g;
            if(max<b) max=b;
        }
        cout<<N-max<<endl;

    }
    return 0;
}
