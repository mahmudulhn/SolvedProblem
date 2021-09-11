#include<bits/stdc++.h>

using namespace std;

int main()
{
    double a[3];
    while(cin>>a[0]>>a[1]>>a[2])
    {
        sort(a,a+3);
        double c=pow(a[0],2.0)+pow(a[1],2.0);
        double b=pow(a[2],2.0);
        if(a[0]==0&&a[1]==0&&a[2]==0)
            return 0;
        else if(a[0]==0||a[1]==0||a[2]==0)
            cout<<"wrong\n";
        else if(c==b)
            cout<<"right\n";
        else
            cout<<"wrong\n";
    }
    return 0;
}
