#include<bits/stdc++.h>
using namespace std;
int a[12][12];
void precal()
{
    for(int i=1;i<12;i++)
    {
        for(int j=1;j<12;j++)
        {
            if(i==1||j==1)
                a[i][j]=1;
            else
                a[i][j]=a[i-1][j]+a[i][j-1];
        }
    }
}
int main()
{
    precal();
    int n;
    cin>>n;
    cout<<a[n][n]<<"\n";
}
