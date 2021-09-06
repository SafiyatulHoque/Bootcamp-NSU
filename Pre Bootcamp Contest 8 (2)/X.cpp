#include<iostream>
using namespace std;

int main()
{
    int T;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        int d;
        int year,yc;
        cin>>year;
        int y=year;
        while(y>=2100)
        {
            y=y-400;
        }
            if(y/100==17)
                yc=4;
            else if(y/100==18)
                yc=2;
            else if(y/100==19)
                yc=0;
            else if(y/100==20)
                yc=6;
        if(year%4==0 && year %100!=0 || year%400==0)
        {
            d=(((year%100)/4)+1+yc+(year%100))%7;
        }
        else
        {
            d=(((year%100)/4)+1+1+yc+(year%100))%7;
        }

        switch(d)
        {
            case 1:{cout<<"sunday"<<endl;break;}
            case 2:{cout<<"monday"<<endl;break;}
            case 3:{cout<<"tuesday"<<endl;break;}
            case 4:{cout<<"wednesday"<<endl;break;}
            case 5:{cout<<"thursday"<<endl;break;}
            case 6:{cout<<"friday"<<endl;break;}
            case 0:{cout<<"saturday"<<endl;break;}
        }


    }
    return 0;
}
