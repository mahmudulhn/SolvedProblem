#include<bits/stdc++.h>
using namespace std;
void solve()
{
    //freopen("in.txt","r",stdin);
    int t;
    while(cin>>t)
    {
        for(int i=1;i<=t;i++)
        {
            int n,m,count0=0,count1=0;
            cin>>n>>m;
            int need=2*(n+(m-2));
            string s[n];
            for(int j=0;j<n;j++)
                cin>>s[j];
            for(int j=0;j<n;j++)
            {
                for(int k=0;k<m;k++)
                {
                    //cout<<s[j][k]<<" "<<j<<" "<<k<<endl;
                    if((j==0||k==0||j==n-1||k==m-1)&&s[j][k]=='1')
                    {
                        count0++;
                        //cout<<s[j][k]<<"\t"<<j<<"\t"<<k<<endl;
                    }

                    if(s[j][k]=='1')
                        count1++;

                }
                //cout<<endl;
            }
            //cout<<need<<" "<<count0<<" "<<count1<<endl;
            if(need-count0<=count1-count0)
                cout<<need-count0<<endl;
            else
                cout<<"-1"<<endl;;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}
