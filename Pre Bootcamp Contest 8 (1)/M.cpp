#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int T,N;
	cin>>T;
	while(T--)
	{
	    cin>>N;
	    int i,a[N];
	    for(i=0;i<N;i++)
	     cin>>a[i];
	    sort(a,a+N);
	    cout<<a[0]+a[1]<<endl;
	}
	return 0;
}
