#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int G;
    while(true)
    {
        cin>>G;
        if(G==0) break;
        int child=0,mom=0,dad=0;
        int total=G*2;
        int every=total/7;
        mom=every;dad=every;child=every;
        int extra=total-(every*7);
        if(extra>=5)
        {
            child=1+child;
            extra=extra%5;
        }
        else if(extra<5 && extra>1)
        {
            int md=extra/2;
            mom=md+mom;
            dad=md+dad;
            extra=extra%2;
        }
        int goat=extra;
        printf("%.1f %.1f %.1f %.1f\n",(float)(goat*.5),(float)(dad*.5),(float)(mom*.5),(float)(child*.5));
    }
    return 0;
}
