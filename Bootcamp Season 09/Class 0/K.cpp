#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,arr[3];
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>arr[0];
        cin>>arr[1];
        cin>>arr[2];
        sort(arr,arr+3);
        cout<<"Case "<<i+1<<": "<<arr[1]<<endl;

    }
    return 0;
}
