#include<bits/stdc++.h>
// #define endl '\n'
using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        int n;
        cin >> n;
        int arr[n];
        for(int k=0; k<n; k++)
            cin >> arr[k];
        sort (arr, arr+n);
        int loop = 0;
        for(int j=1; j < n; j++)
		{
			if(arr[j] > arr[j-1] + 1)
			{
				cout << "NO" << endl;
				loop = 1;
				break;
			}
		} 
		if(loop == 0) cout <<"YES"<<endl;

    }
}