#include<bits/stdc++.h>
using namespace std;

int sumDigit(int x)
{
    int sum = 0;
    int sub;
    while(x!=0)
    {
        sub = x % 10;
        sum = sum + sub;
        x = x/10; 
    }
    return sum;
}

int main()
{
    int k;
    cin>>k;
    int loop = 0;
    for(int i=19,j=0; j<=k; i=i+9)
    {
        if(sumDigit(i) == 10)
            j++;

        if(j == k)
        {
             cout<<i<<endl;
             break;
        }
    }

}