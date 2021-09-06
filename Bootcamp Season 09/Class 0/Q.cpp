#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,x,y,loop;
    cin>>t;
    for(int i=0;i<t;i++){
        loop=0;
        cin>>x;
        cin>>y;
        loop=(x/3)*(y/3);
        cout<<loop<<endl;
    }
    return 0;
}
