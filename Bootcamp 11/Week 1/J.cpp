#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int main()
{
    int n;
    cin >> n;
    string str;
    cin >> str;
    char arr[10];

    for (int i = 0; i < 10; i++)
    {
        arr[i] = '0';
    }
    
    for (int i = 0; i < n; i++)
    {
        if (str[i] == 'L')
        {
            for (int j = 0; j < 10; j++)
            {
                if (arr[j] == '0')
                {
                    arr[j] = '1';
                    break;
                } 
            }
        }

        if (str[i] == 'R')
        {
            for (int j = 9; j >= 0; j--)
            {
                if (arr[j] == '0')
                {
                    arr[j] = '1';
                    break;
                } 
            }
        }

        if(str[i] >= '0' && str[i] <= '9')
        {
            int x = str[i] - 48;
            arr[x] = '0';
        }
    }

    for (int i = 0; i < 10; i++)
    {
        cout << arr[i];
    }

}