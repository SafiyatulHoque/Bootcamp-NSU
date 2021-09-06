#include<iostream>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        int sum=0;
        if(n<0)
        {
            cout<<"0"<<endl;
            continue;
        }

        for(int i=1;i*i<=n;i++)
        {
            if(n%i==0)
            {
                int j=n/i;
                sum=sum+i;
                if(i!=j) sum=sum+j;
            }
        }
        cout<<sum-n<<endl;
    }

    return 0;
}
