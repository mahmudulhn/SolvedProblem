#include<bits/stdc++.h>
using namespace std;
//int a[]={2,4,6,8,10,12,14,16,32,64,128,256};
//map<string,int>mp;
void solve()
{
    int n;
    while(cin>>n)
    {
        int a[n][n],sum=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>a[i][j];
                if(abs(i-j)==0||abs(i+j)==n-1)
                {
                    //cout<<i<<" "<<j<<endl;
                    sum+=a[i][j];
                }
                else if(i==(n-1)/2)
                {
                    //cout<<i<<" "<<j<<endl;
                    sum+=a[i][j];
                }
                else if(j==(n-1)/2)
                {
                    //cout<<i<<" "<<j<<endl;
                    sum+=a[i][j];
                }
            }
        }
        cout<<sum<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}




