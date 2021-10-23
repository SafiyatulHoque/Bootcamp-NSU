#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    int arr[n];
    int sum = 0;
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    sort(arr, arr+n);
    int low = arr[0];
    int rem = x - sum;
    int amount = rem / low;
    amount += n;
    cout << amount; 


}