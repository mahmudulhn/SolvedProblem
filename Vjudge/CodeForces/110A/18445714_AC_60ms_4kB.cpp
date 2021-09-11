#include<bits/stdc++.h>
using namespace std;
//int a[]={2,4,6,8,10,12,14,16,32,64,128,256};
//map<string,int>mp;
void solve()
{
    string s;
    while(cin>>s)
    {
        int count=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='4'||s[i]=='7')
                count++;
        }
        if(count==4||count==7)
            cout<<"YES"<<endl;
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


