#include<iostream>
using namespace std;
int main()
{
    int T,N;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        cin>>N;
        int fact=1;
        for(int j=N;j>1;j--)
            fact=fact*j;
        cout<<fact<<endl;
    }
    return 0;
}
