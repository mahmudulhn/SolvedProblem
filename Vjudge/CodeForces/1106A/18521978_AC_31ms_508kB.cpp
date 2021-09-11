#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    while(cin>>n)
    {
        string s[n];
            int count=0;
            for(int i=0;i<n;i++)
                cin>>s[i];
            for(int i=1;i<n-1;i++)
            {
                for(int j=1;j<n-1;j++)
                {
                    if(s[i][j]=='X'&&s[i-1][j-1]=='X'&&s[i-1][j+1]=='X'&&s[i+1][j-1]=='X'&&s[i+1][j+1]=='X')
                        count++;
                }
            }
            cout<<count<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}
