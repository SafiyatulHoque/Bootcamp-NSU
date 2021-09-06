#include <iostream>
using namespace std;
int main()
{
	long long i = 0,n=0;
		cin >> n;
			for (i = 1; i * i <= n; i++)
			{
				if (n % i == 0)
				{
					cout << i << " ";
				}
			}
			for (i = i-1; i  >0 ; i--)
			{
				if (n % i == 0 && (i *i)!= n)
				{
				    long long r= n/i;
					cout << r << " ";
				}
			}

	return 0;
}
