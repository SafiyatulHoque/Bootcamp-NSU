#include<bits/stdc++.h>
#define endl '\n';

using namespace std;

int main()
{
    int t;
    cin>>t;
    string num;
    int loop = 0;

    for(int j=0; j<t; j++)
    {
        cin >> num;
        int count = 0;
        int n1 = 0, n2 = 0, loop = 0;
        for (int i = 0; i < num.length(); i++)
        {
            
            if ( num[i] == '1' )
                {
                    n1 = i;
                    break;
                }
        }

        for (int i =num.length()-1 ; i >= 0; i--)
        {
            
            if ( num[i] == '1' )
                {
                    n2 = i;
                    break;
                }
        }

        if(num[n1] == '1')
        {
            for (int i = n1 ; i <= n2; i++)
            {
                
                if ( num[i] == '0' )
                {
                    loop++;
                }
            }
        }
        

        cout << loop << endl;
        
    }
    return 0;
}