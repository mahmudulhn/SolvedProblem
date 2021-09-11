#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n[3],m[3];
    while(cin>>n[0]>>n[1]>>n[2]>>m[0]>>m[1]>>m[2])
    {
        if(n[0]+n[1]+n[2]>m[0]+m[1]+m[2])
            cout<<"NO"<<endl;
        else
        {
            if(n[0]<=m[0])
            {
                if((m[0]-n[0])+m[1]>=n[1])
                {
                    if(((((m[0]-n[0])+m[1])-n[1])+m[2])>=n[2])
                        cout<<"YES"<<endl;
                    else
                        cout<<"NO"<<endl;
                }
                else
                    cout<<"NO"<<endl;
            }
            else
                cout<<"NO"<<endl;
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
