#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,suma=0,sumb=0;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
            if(i==j)
                suma+=a[i][j];
            if(i+j==n-1)
                sumb+=a[i][j];
        }
    }
    cout<<abs(suma-sumb)<<"\n";
}
