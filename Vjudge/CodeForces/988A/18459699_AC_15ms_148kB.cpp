#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,k;
    while(cin>>n>>k)
    {
        int count=0,a[n];
        set<int>s;
        int p;
        set<int>::iterator it;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            s.insert(a[i]);
        }
        if(s.size()>=k)
        {
            cout<<"YES"<<endl;
            for(it=s.begin();it!=s.end();it++)
            {
                if(k==0)
                    break;
                k--;
                p=*it;
                for(int i=0;i<n;i++)
                {
                    if(p==a[i])
                    {
                        cout<<i+1<<" ";
                        break;
                    }
                }
            }
            cout<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}
