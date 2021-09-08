#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n,a;
    cin>>n;
    int max=-1;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        sum=sum+a;
        if(a>max)
            max=a;
    }
    cout<<(max*n)-sum<<endl;
    return 0;
}
