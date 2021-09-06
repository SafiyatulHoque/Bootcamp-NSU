#include<bits/stdc++.h>
using namespace std;

int main(){
   int i,l=0,p=0;
   string s;
   cin>>s;;
   int len = s.size();
   for(i=0; i<len; i++){
     if(s[i]=='-')
        l++;
     else
        p++;
   }
   if(p==0)
      cout<<"YES"<<endl;
   else if(l%p==0)
      cout<<"YES"<<endl;
   else
      cout<<"NO"<<endl;
}
