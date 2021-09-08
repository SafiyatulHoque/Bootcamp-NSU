#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int T,N;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        cin>>N;
        int rem1=0,rem2=0;
        int length = to_string(N).length();
        rem1=N%10;
        rem2=(int)(N/pow(10,length-1))%10;
        cout<<rem1+rem2<<endl;
    }
    return 0;
}
