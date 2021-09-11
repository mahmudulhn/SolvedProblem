#include<bits/stdc++.h>
using namespace std;
void reverse( string s)
{
    for(int i=s.size()-1;i>=0;i--)
        cout<<s[i];
}
void solve()
{
    string s;
    while(cin>>s)
    {
        cout<<s;
        reverse(s);
        cout<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}
