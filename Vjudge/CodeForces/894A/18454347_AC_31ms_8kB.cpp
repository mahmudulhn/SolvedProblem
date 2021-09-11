#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    while(cin>>s)
    {
        int count=0;
        for(int i=0;i<s.size();i++)
        {
            for(int j=i+1;j<s.size();j++)
            {
                for(int k=j+1;k<s.size();k++)
                {
                    if(s[i]=='Q'&&s[j]=='A'&&s[k]=='Q')
                            count++;
                }
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


