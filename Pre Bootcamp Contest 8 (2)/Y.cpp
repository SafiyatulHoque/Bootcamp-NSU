#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;

int main()

{

    int arr[100009]= {0},m,n,i,j,c=0;

    while(cin>>n)

    {

        c=0;

        for(i=0; i<n; i++)

            cin>>arr[i];

        sort(arr,arr+n);

        for(i=0; i<n-2; i++)

            if(arr[i]+arr[i+1]>arr[i+2])

            {

            c=1;break;

            }

        if(c==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;

}


/*#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long int arr[n];
    int flag=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int x=0;x<n;x++)
        {
            if(x==i) continue;
            for(int y=0;y<n;y++)
            {
                if(y==i || y==x) continue;
                if((arr[i]+arr[x])>arr[y] && (arr[i]+arr[y])>arr[x] && (arr[x]+arr[y])>arr[i])
                {
                    flag=1;
                    break;
                }
            }
            if(flag==1) break;
        }
        if(flag==1) break;
    }

    if(flag==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
