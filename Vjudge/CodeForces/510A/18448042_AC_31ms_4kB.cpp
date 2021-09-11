#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,m;
    while(cin>>n>>m)
    {
        bool flag=false;
        //cout<<n<<" "<<m<<endl;
        for(int i=1;i<=n;i++)
        {
            if(i%2==0)
            {
                for(int j=1;j<=m;j++)
                {
                    if(flag&&j==1)
                        cout<<"#";
                    else if(!flag&&j==m)
                        cout<<"#";
                    else
                        cout<<".";
                }
                if(flag)
                    flag=false;
                else
                    flag=true;
            }
            else
            {
                for(int j=1;j<=m;j++)
                    cout<<"#";
            }
            cout<<endl;
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