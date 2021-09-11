#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    int n,color[3],i;
    char c;
    cin>>test;
    while(test--)
    {
        cin>>n;
        i=n;
        memset(color,0,sizeof(color));
        while(n--)
        {
            cin>>c;
            if(c=='R')
                color[0]++;
            if(c=='G')
                color[1]++;
            if(c=='B')
                color[2]++;
        }
        sort(color,color+3);
        cout<<i-color[2]<<"\n";
    }
}
