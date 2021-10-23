#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    string s , t;
    cin >> s >> t;
    int slen = s.length()-1 ;
    int tlen = t.length()-1 ;
    int count = 0;
    while (slen >= 0 && tlen >= 0)
    {
        if ( s[slen] == t[tlen] )
            count+=2;
        else break;

        slen--, tlen--;
    }
    
    cout << s.length() + t.length() - count;
}


















// int main()
// {

//     string s , t ;
//     cin >> s >> t;
//     int slen, tlen;
//     slen = s.length();
//     tlen = t.length();
//     string sclone = s, tclone = t;
//     int loop = 0;
//     while( tclone != "")
//     {
//         loop = 0;
//         while ( sclone != tclone )
//         {
//             sclone.erase(sclone.begin());
//             loop++;
//             if(sclone == "")   break;
//         }
        
//         if (sclone == tclone) break;
//         tclone.erase(tclone.begin());
//         if (tclone == "" && sclone == "") break;    
//         sclone = s;
    
//     }

//     if (tclone == "" && sclone == "")
//     {
//         cout << slen+tlen; 
//         return 0;
//     }

//     if (s == t) cout << "0";
//     else cout << loop+1;


// }
