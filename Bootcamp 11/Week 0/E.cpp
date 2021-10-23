#include<bits/stdc++.h>
using namespace std;

int main()
{
    char ch1,ch2;
    cin>>ch1>>ch2;
    int s;
    cin>>s;

    int md = s % 4;
    char str[8] = {'^', '>', 'v', '<', '^', '>', 'v', '<'};

    if(md == 0 || md == 2)
    {
        cout<<"undefined";
        return 0;
    }

    int flag1,flag2;
    int in = 0;
    int loop1 = 0;
    int loop2 = 0;

    for(int i=0;i<8;i++)
    {
        
        if (in == 1)
        {
            loop1++;
            if(str[i] == ch2)
                break;
        }
        if(str[i] == ch1)
            in = 1;

    }

    in = 0;

    for(int i=7;i>=0;i--)
    {
        if (in == 1)
        {
            loop2++;
            if(str[i] == ch2)
                break;
        }
        if(str[i] == ch1)
            in = 1;

    }


    if(loop1 == md)
        cout<<"cw";
    if(loop2 == md)
        cout<<"ccw";

    return 0;

}