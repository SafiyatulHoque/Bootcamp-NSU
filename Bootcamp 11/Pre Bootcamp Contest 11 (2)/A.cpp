#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int N;
    cin>>N;
    for(int i=0;i<N;i++)
    {
        int M;
        cin>>M;
        int flag=0;
        int n=M;
        while(n!=0)
        {
            int rem=n%2;
            if(rem==1)
                flag++;
            n=n/2;
        }
        int h=M;
        int looph=0;
        int flagh=0;
        int sum=0;
        while(h!=0)
        {
            int rem=h%10;
            sum=(int)sum+(pow(16,looph)*rem);
            h=h/10;
            looph++;
        }

        int hex=sum;
        while(hex!=0)
        {
            int rem=hex%2;
            if(rem==1)
                flagh++;
            hex=hex/2;
        }
        cout<<flag<<" "<<flagh<<endl;

    }
    return 0;
}
