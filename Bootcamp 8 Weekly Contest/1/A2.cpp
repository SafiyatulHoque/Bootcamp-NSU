#include<iostream>
#include<math.h>
using namespace std;

bool isPrime(long long n){
    if(n==1) return false;
    for(int i=2;i*i<=pow(n,0.5);i++)
    {
        if(n%i==0) return false;
    }
    return true;
}

bool revisPrime(long long n){
    long long rev=0;
    while(n!=0)
    {
        int rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    n=rev;
    if(n==1) return false;
    for(int i=2;i<=pow(n,0.5);i++)
    {
        if(n%i==0) return false;
    }
    return true;
}

int main()
{
    long long N;
    while(cin>>N)
    {
        if(isPrime(N)==true && revisPrime(N)==true)
        {
            cout<<N<<" is emirp."<<endl;
        }
        else if(isPrime(N)==true)
        {
            cout<<N<<" is prime."<<endl;
        }
        else cout<<N<<" is not prime."<<endl;
    }
    return 0;
}


/*

#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int num,i,m,rev,r,p,tmp,j;

    while(cin>>num)
    {
        m=0;
        tmp=num;

        for(i=2;i<=pow(num,0.5);i++)
        {
            if(num%i==0)
            {
                m=1;
                break;
            }
        }
        if(m==0)
        {
            rev=0;
            p=0;

            while(num)
            {
            r=num%10;
            rev=rev*10+r;
            num=num/10;
            }
            for(j=2;j<=pow(rev,0.5);j++)
            {
                if(rev%j==0)
                {
                    p=1;
                    break;
                }
            }
            if(p==0 && tmp!=rev)
            {
                cout<<tmp<<" is emirp."<<endl;
            }
            else
               cout<<tmp<<" is prime."<<endl;
        }
        else
            cout<<tmp<<" is not prime."<<endl;
    }
    return 0;
}
