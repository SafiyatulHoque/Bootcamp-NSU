#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n+1];

    for(int i=1; i<n+1; i++)
    {
        cin >> arr[i];
    }

    int m;
    cin >> m;
    int x, y;
    for (int i=1; i<=m; i++)
    {
        cin >> x;
        cin >> y;
        int right = arr[x] - y;
        int left = arr[x] - right -1;
        if ( x != 1 )  arr[x-1] = arr[x-1] + left;
        if ( x != n)  arr[x+1] = arr[x+1] + right;
        arr[x] = 0;
    }

     for(int i=1; i<n+1; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}