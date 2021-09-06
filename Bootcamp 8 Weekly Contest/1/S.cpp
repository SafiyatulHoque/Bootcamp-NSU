#include<iostream>
using namespace std;
int main()
{
    int sh,sm,eh,em;
    char ch;
    cin>>sh>>ch>>sm;
    cin>>eh>>ch>>em;
    int hour=(sh+eh)/2;
    int mm=(sh+eh)%2;
    if(mm==1)
        mm=60;

    int mint=((sm+em+mm)/2);
    if(mint==60)
    {
        hour++;
        mint=0;
    }
    else if(mint>60)
    {
        hour++;
        mint=mint%60;
    }
    else
        mint=mint%60;

    if(hour<10 && mint<10)
        cout<<"0"<<hour<<":0"<<mint;
    else if(hour<10)
        cout<<"0"<<hour<<":"<<mint;
    else if(mint<10)
        cout<<hour<<":0"<<mint;
    else
        cout<<hour<<":"<<mint;
    return 0;
}
