#include<iostream>
#include<string>
#include<stack>
using namespace std;
int main()
{
    string s;int loop=0;
    getline(cin,s);
    int arr[100000];

    for(int i=0;i<s.length();)
    {
        /*if(s[i]==' ')
        {
            continue;
        }*/
        //else

        if(s[i]!=' '){
            arr[i]=s[i];
            i++;
            loop++;
        }
    }


    for(int i=0;i<loop;i++)
    {
        cout<<arr[i]<<endl;
    }

    return 0;
}
