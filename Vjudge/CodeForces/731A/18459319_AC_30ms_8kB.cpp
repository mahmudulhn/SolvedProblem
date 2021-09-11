#include<bits/stdc++.h>
using namespace std;
int a[26];
void in()
{
    for(int i=0;i<26;i++)
        a[i]=i;
}
void solve()
{
    in();
    string s;
    while(cin>>s)
    {
        int ans=0;
        for(int i=0;i<s.size();i++)
        {
            if(i!=0)
            {
                if(abs(a[s[i]-'a']-a[s[i-1]-'a'])<13)
                    ans+=abs(a[s[i]-'a']-a[s[i-1]-'a']);
                else
                    ans+=abs(13-(abs(a[s[i]-'a']-a[s[i-1]-'a'])%13));
            }

            else
            {
                if(abs(a[s[i]-'a']-a[0])<13)
                    ans+=abs(a[s[i]-'a']-a[0]);
                else
                    ans+=abs(13-(abs(a[s[i]-'a']-a[0])%13));
            }

        }
        cout<<ans<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}









