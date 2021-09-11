#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string s,n;
    while(cin>>s>>n)
    {
        int count=0;
        for(int i=0,j=0;i<s.size();)
        {
            if(j>=n.size())
                break;
            if(s[i]==n[j])
            {
                i++;
                j++;
                count++;
            }
            else
                j++;
        }
        cout<<count+1<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}
