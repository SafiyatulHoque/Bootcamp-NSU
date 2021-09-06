#include<iostream>
#include<vector>
#include<algorithm>
#include<set>

using namespace std;

int main(){

    vector< int > v;
    int num ,count=0;
    while(cin >> num){
        v.push_back(num);
        sort(v.begin(),v.end());
        if(count%2==0){
            int midean=(0+count)/2;
            cout << v[midean] << endl;
        }
        else{
            int midean=(0+count)/2;
            int m=midean+1;
            int value=(v[midean]+v[m])/2;
            cout << value << endl;
        }
        count++;
    }
    return 0;
}
