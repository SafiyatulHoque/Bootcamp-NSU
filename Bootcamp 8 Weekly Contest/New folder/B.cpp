#include<iostream>
using namespace std;
int main()
{
    int t,k,m,flag,max,cn,p;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>k;
        int a[k],b[k+5];
        max=0;
        for(int j=0;j<k;j++)
        {
            cin>>a[j];
            if(max<a[j])
                max=a[j];
        }
        if(max==1)
        {
            cout<<max<<endl;
            return 0;
        }

        for(m=max*2;;m++)
        {

            cn=0;
            for (p = 2; p * p <= m; p++)
                {

                    if (m % p == 0) {
                    int q = m / p;

                    b[cn]=p;
                    cn++;
                    if (p != q)
                    {
                      b[cn]=q;
                        cn++;
                    }
                }
            }
            //int count=0;
            for(int w=0;w<cn;w++)

            {
                flag=0;
                for(int z=0;z<k;z++)
                {
                    if(a[z]==b[w])
                    {
                        //count++;
                        flag=1;
                        break;
                    }
                }
                if(flag==0) break;
                //if(flag==0) break;
            }
            if(flag==1) break;


        }
        cout<<m<<endl;
    }


    return 0;
}
