#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,m;
    while(cin>>n>>m)
    {
        string s;
        cin>>s;
        while(m--)
        {
            int x,y;
            char a,b;
            cin>>x>>y;
            cin>>a>>b;
//            cout<<a<<b;
//            if(x==y)
//                s[x]=b;
//            else
//            {
            for(int i=x-1;i<y;i++)
            {
                if(s[i]==(char)a)
                    s[i]=b;
            }
//            }
        }
        cout<<s<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}
