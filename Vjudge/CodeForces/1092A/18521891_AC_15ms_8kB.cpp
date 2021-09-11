#include<bits/stdc++.h>
using namespace std;
void reverse( string s)
{
    for(int i=s.size()-1;i>=0;i--)
        cout<<s[i];
}
void solve()
{
    int t,n,m;
    while(cin>>t)
    {
        while(t--)
        {
            cin>>n>>m;
            char a='a';
            int c=0;
            for(int i=0;i<n;i++)
            {
                cout<<(char)((int)a+c);
                if(c==m-1)
                    c=0;
                else
                    c++;
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

