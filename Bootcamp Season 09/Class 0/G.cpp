#include<iostream>

using namespace std;

int main()
{
    int n,f,fy,anim,env;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>f;
        int result=0;
        for(int j=0;j<f;j++)
        {
            cin>>fy;
            cin>>anim;
            cin>>env;
            result=result+(fy*env);
        }
        cout<<result<<endl;
    }
    return 0;
}
