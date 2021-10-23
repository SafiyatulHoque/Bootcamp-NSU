#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int t;
    cin >> t;
     for(int i=0; i<t; i++)
     {
         int n;
         cin >> n;
         int can[n];
         for(int k=0; k<n; k++)
            cin >> can[k];
         int orn[n];
         for(int k=0; k<n; k++)
            cin >> orn[k];
        
        sort (can, can+n);
        sort (orn, orn+n);

        int low;
        if (can[0] < orn[0]) low = can[0];
        else low = orn[0];

        long long move = 0;

        for(int k=1; k<n-1; k++)
        {
            move = move +(can[k]-can[0]);
        }

        for(int k=1; k<n-1; k++)
        {
            move = move +(orn[k]-orn[0]);
        }

        int m = max(can[n-1], orn[n-1]);
        int mm = min(can[n-1], orn[n-1]);

        if (mm == can[n-1])
        {
            int rem = can[n-1] - can[0];
            move = move + can[n-1] - can[0];
            orn[n-1] = orn[n-1] - rem;
            move = move +  orn[n-1] - orn[0];

        }
        else
        {
            int rem = orn[n-1] - orn[0];
            move = move + orn[n-1] - orn[0];
            can[n-1] = can[n-1] - rem;
            move = move +  can[n-1] - can[0];
        }
        cout<<move<<endl;
        
     }

}