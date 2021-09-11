#include<bits/stdc++.h>
using namespace std;
//int a[]={2,4,6,8,10,12,14,16,32,64,128,256};
//map<string,int>mp;
void solve()
{
    int n;
    while(cin>>n)
    {
        int a[n],b[n],count=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            cin>>b[i];
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(a[i]==b[j])
                    count++;
            }
        }
        cout<<count<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}



