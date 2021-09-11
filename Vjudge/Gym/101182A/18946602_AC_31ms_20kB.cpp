#include<bits/stdc++.h>
using namespace std;
void solve()
{
    //freopen("in.txt","r",stdin);
    int t;
    cin>>t;
        string r1,r2;
        cin>>r1;
        cin>>r2;
        for(int i=0;i<t;i++)
        {
            if(r1[i]==r2[i])
            {
                if(r1[i]=='S')
                    cout<<"R";
                if(r1[i]=='P')
                    cout<<"S";
                if(r1[i]=='R')
                    cout<<"P";
            }
            else
            {
                if(r1[i]=='P'&&r2[i]=='S')
                    cout<<"S";
                else if(r1[i]=='S'&&r2[i]=='P')
                    cout<<"S";
                else if(r1[i]>r2[i])
                    cout<<r2[i];
                else if(r1[i]<r2[i])
                    cout<<r1[i];
            }
        }
        cout<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}
