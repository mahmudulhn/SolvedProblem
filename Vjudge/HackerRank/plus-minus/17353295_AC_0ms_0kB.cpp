#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,P=0,N=0,Z=0,i;
    cin>>n;
    i=n;
    while(n--)
    {
        cin>>m;
        if(m>0)
            P++;
        else if(m<0)
            N++;
        else
            Z++;
    }
    cout<<fixed<<setprecision(6);
    cout<<(float)P/i<<"\n"<<(float)N/i<<"\n"<<(float)Z/i<<"\n";
}
