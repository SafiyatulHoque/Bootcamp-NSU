#include<iostream>
#include<string>
using namespace std;

void reverse(string& str)
{
    int n = str.length();
    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
}

int main()
{
    string s1,s2,s3,sp1,sp2,sp3;
    int arr[26]={0};
    cin>>s1;
    cin>>s2;
    sp1=s1;
    sp2=s2;
    reverse(sp1);
    reverse(sp2);
    s3=sp1+sp2;

    if(s1==sp1 && s2==sp2)
        ;
    else
    {
        cout<<"NO";
        return 0;
    }

    int n = s3.length();
    for(int i=0;i<n;i++)
    {
        if(s3[i]=='a') arr[0]++;
        if(s3[i]=='b') arr[1]++;
        if(s3[i]=='c') arr[2]++;
        if(s3[i]=='d') arr[3]++;
        if(s3[i]=='e') arr[4]++;
        if(s3[i]=='f') arr[5]++;
        if(s3[i]=='g') arr[6]++;
        if(s3[i]=='h') arr[7]++;
        if(s3[i]=='i') arr[8]++;
        if(s3[i]=='j') arr[9]++;
        if(s3[i]=='k') arr[10]++;
        if(s3[i]=='l') arr[11]++;
        if(s3[i]=='m') arr[12]++;
        if(s3[i]=='n') arr[13]++;
        if(s3[i]=='o') arr[14]++;
        if(s3[i]=='p') arr[15]++;
        if(s3[i]=='q') arr[16]++;
        if(s3[i]=='r') arr[17]++;
        if(s3[i]=='s') arr[18]++;
        if(s3[i]=='t') arr[19]++;
        if(s3[i]=='u') arr[20]++;
        if(s3[i]=='v') arr[21]++;
        if(s3[i]=='w') arr[22]++;
        if(s3[i]=='x') arr[23]++;
        if(s3[i]=='y') arr[24]++;
        if(s3[i]=='z') arr[25]++;
    }
    int count=0;
    //cout<<arr[1]<<arr[25];
    for(int i=0;i<26;i++)
    {
        if(arr[i]%2!=0)
            count++;
        if(count==2)
            break;
    }
    if(count==2)
        cout<<"NO";
    else
        cout<<"YES";

    return 0;
}
