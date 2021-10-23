#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
    string str;
    string strFinal = "";
    cin >> str;
    string strIn = "heidi"; 
    int loop = 0; 

    for(int i=0; i<str.length(); i++)
    {
        if (strIn [loop] == str[i])
        {
            strFinal = strFinal + str[i];
            loop++;
        }
    }

    if(strFinal == strIn)
        {
            cout << "YES";
            return 0;
        }
    cout << "NO";
    return 0;
}