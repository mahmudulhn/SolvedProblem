#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,k;
    while(cin>>n>>k)
    {
        string s;
        cin>>s;
        int m[k];
        memset(m,0,sizeof m);
        for(int i=0;i<s.size();i++)
            m[s[i]-'A']++;
        sort(m,m+k);
        cout<<m[0]*k<<endl;

    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}


