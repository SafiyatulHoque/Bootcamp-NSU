#include<bits/stdc++.h>
using namespace std;

int gcd (int x, int y)
{
    if (x == 0)
        return y;
    return gcd( y%x  , x);
}

int findGCD (int arr[], int n)
{
    int result = arr[0];
    for(int i=1; i<n; i++)
    {
        result = gcd(arr[i], result);
        if(result == 1)
            {
                return 1;
            }
    }
    return result; 
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int flag1 = 1;

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(gcd(arr[i],arr[j]) == 1)
                ;
            else
                {
                    flag1 = 0;
                    break;
                }
        }
        if(flag1 == 0)
            break;
    }

    if(flag1==1)
    {
        cout<<1;
        return 0;
    }

    if (findGCD(arr,n) == 1)
        cout<<2;
    else
        cout<<3;



    return 0;
}