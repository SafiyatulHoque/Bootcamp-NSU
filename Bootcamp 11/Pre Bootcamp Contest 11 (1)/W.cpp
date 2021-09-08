#include <iostream>
using namespace std;
int gcd(int a,int b){
    if(b==0){
        return a;
    }
   return gcd(b,a%b);
}
int main() {
int t;
cin>>t;
while(t--){
    long long a,b;
    cin>>a>>b;
    int g=gcd(a,b);
    long long x=(a*b)/g;
    cout<<g<<" "<<x<<endl;

}
return 0;
}
