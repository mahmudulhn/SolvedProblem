#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,m;
    while(cin>>n>>m)
    {
        set<int>s;
        set<int>::iterator it;
        vector<int>v;
        int a,b;
        while(n--)
        {
            cin>>a>>b;
            for(int i=a;i<=b;i++)
                s.insert(i);
        }
        //sort(s.begin(),s.end());
        cout<<m-s.size()<<endl;
        int i=1;
        if(s.size()!=m)
        {
            for(it=s.begin();it!=s.end();)
            {
                if(*it==i)
                {
                    i++;
                    it++;
                }
                else
                {
                    cout<<i<<" ";
                    i++;
                }
            }
            it=s.end();
            it--;
            int x=*it;
            //cout<<x<<endl;
            for(int i=x+1;i<=m;i++)
                cout<<i<<" ";
            cout<<endl;
        //cout<<endl;
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