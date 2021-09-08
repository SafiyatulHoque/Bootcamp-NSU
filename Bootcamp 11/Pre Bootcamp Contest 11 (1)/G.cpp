#include <algorithm>
#include <cstdio>
#include <cmath>
#include<stdio.h>
#define PI acos(-1)
using namespace std;

int main()
{
    int t,i;
    double l,w,r,areac, arearec;
    while(scanf("%d",&t)==1)
    {
        for(i=1;i<=t;i++)
        {
            scanf("%lf",&l);
            r=l/5;
            w=(l*6)/10;
            areac=PI*r*r;
            arearec=(l*w)-areac;
            printf("%.2lf %.2lf\n",areac,arearec);
        }
    }
    return 0;
}

/*
#include <bits/stdc++.h>

using namespace std;

const double PI = acos(-1.0);

int main()
{
    int t, l;
    double w, r;

    scanf("%d", &t);
    while(t--) {
        scanf("%d", &l);

        w = 0.6 * l;
        r = 0.2 * l;

        printf("%.2f %.2f\n", PI * r * r, w * l - PI * r * r);
    }

    return 0;
}
*/


/*
#include <stdio.h>
#include<iostream>
#include<cmath>
using namespace std;

const double PI = acos(-1.0);

int main()
{
    int t, l;
    double w, r;

    scanf("%d", &t);
    while(t--) {
        scanf("%d", &l);

        w = 0.6 * l;
        r = 0.2 * l;

        printf("%.2f %.2f\n", PI * r * r, w * l - PI * r * r);
    }

    return 0;
}

*/
