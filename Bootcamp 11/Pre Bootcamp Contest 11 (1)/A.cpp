#include<iostream>

using namespace std;

int main()
{
    int n,b=0,c=0,i,x,y;
    cin>>n;
    int a[n+1];
    for(i=1;i<=n;i++){
        cin>>a[i];
    }
    for(i=1;i<=n;i++){
        if(a[i]%2==0){
          c++;
          x=i;
        }
        else{
          b++;
          y=i;
        }
    }
    if(c==1) cout<<x<<endl;
    else if(b==1) cout<<y<<endl;

    return 0;

}
