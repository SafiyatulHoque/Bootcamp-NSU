#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;

int main()
{
    int T;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        long long arr[3];
        cin>>arr[0]>>arr[1]>>arr[2];
        sort(arr,arr+3);

        if(arr[0]+arr[1]<=arr[2])
            cout<<"Case "<<i+1<<": Invalid"<<endl;
        else if(arr[0]+arr[1]>arr[2])
        {
            if(arr[0]==arr[1] && arr[0]==arr[2] && arr[1]==arr[2])
            cout<<"Case "<<i+1<<": Equilateral"<<endl;
        else if(arr[0]==arr[1] || arr[0]==arr[2] || arr[1]==arr[2])
            cout<<"Case "<<i+1<<": Isosceles"<<endl;
        else
            cout<<"Case "<<i+1<<": Scalene"<<endl;
        }
        else
            cout<<"Case "<<i+1<<": Invalid"<<endl;

    }

    return 0;
}
