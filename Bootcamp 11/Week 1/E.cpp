#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> num;
    int n,number;
    cin >> n;
    for (int i=0; i<n; i++)
    {
        cin >> number;
        num.push_back(number);
    }
    sort (num.begin(), num.end());

    for (auto i = num.begin(); i != num.end(); ++i)
        cout << *i << " ";

    return 0;
}