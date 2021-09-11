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
            double a,b,c,d;
            cin>>a>>b>>c>>d;
            //cout<<log(b)/log(a)<<" "<<log(d)/log(c)<<endl;
            //cout<<log10(16)<<" "<<4*log10(2)<<endl;
            if(b*log10(a)>d*log10(c))
                cout<<">"<<endl;
            else
                cout<<"<"<<endl;
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
