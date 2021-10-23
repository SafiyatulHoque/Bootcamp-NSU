#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string str;
    cin>>str;
    int sum1=0;
    int sum2=0;
    int ex;

    int flag = 0;

    for(int i=0; i<n/2; i++)
    {
        if(str[i] == '4' || str[i] == '7')
            {
                ex = str[i] - 48;
                sum1 = sum1 + ex;
            }
        else
            {
                flag = 1;
            break;
            }
        
    }

    if(flag!=1)
    {
        for(int i=n/2; i<n; i++)
        {
              if(str[i] == '4' || str[i] == '7')
                {
                    ex = str[i] - 48;
                    sum2 = sum2 + ex;
                }
            else
                {
                    flag = 1;
                    break;
                }
        }
    }

    if (sum1 == sum2 && flag == 0)
        cout<<"YES";
    else
        cout<<"NO";

    return 0;
}