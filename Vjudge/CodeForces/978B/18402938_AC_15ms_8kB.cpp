#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    while(cin>>n)
    {
        string s;
        cin>>s;
        int c=0;
        for(int i=0;i<n;i++)
        {
            if(s[i-2]=='x'&&s[i-1]=='x'&&s[i]=='x')
                c++;
        }
        cout<<c<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}
