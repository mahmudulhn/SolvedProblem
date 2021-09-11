#include<bits/stdc++.h>
using namespace std;
int x[11];
int main()
{
    int a[3],b[3];
    cin>>a[0]>>a[1]>>a[2];
    //sort(a,a+3);
    x[a[0]]++;
    x[a[1]]++;
    x[a[2]]++;

    if(x[1]==3)
        cout<<3<<"\n";
    else if(x[1]==2&&(a[0]==1&&a[1]==1))
        cout<<2*a[2]<<"\n";
    else if(x[1]==2&&(a[1]==1&&a[2]==1))
        cout<<2*a[0]<<"\n";
    else if(x[1]==2&&(a[0]==1&&a[2]==1))
        cout<<2+a[1]<<"\n";
    else if(x[1]==1&&(a[0]==1))
        cout<<(1+a[1])*a[2]<<"\n";
    else if(x[1]==1&&(a[1]==1))
    {
        if(a[0]>a[2])
            cout<<(1+a[2])*a[0]<<"\n";
        else
            cout<<(1+a[0])*a[2]<<"\n";
    }
    else if(x[1]==1&&(a[2]==1))
        cout<<(1+a[1])*a[0]<<"\n";
    else
        cout<<(a[0]*a[1]*a[2])<<"\n";
}
