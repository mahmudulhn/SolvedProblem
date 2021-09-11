#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,y,m=0,max=0;
    cin>>n;
    while(n--)
    {
        cin>>x>>y;
        m=(m-x)+y;
        if(m>max)
            max=m;
    }
    cout<<max<<"\n";
}
