#include<bits/stdc++.h>
using namespace std;
//int a[]={2,4,6,8,10,12,14,16,32,64,128,256};
//map<string,int>mp;
void solve()
{
    string s;
    while(getline(cin,s))
    {
        set<char>se;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>='a'&&s[i]<='z')
                se.insert(s[i]);
        }
        cout<<se.size()<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}


