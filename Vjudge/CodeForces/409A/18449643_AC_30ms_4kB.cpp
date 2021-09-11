#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string n,m;
    while(cin>>n>>m)
    {
        int sum1=0,sum2=0;
        for(int i=0;i<n.size();i+=2)
        {
            if(n[i]=='['&&n[i+1]==']')
            {
                if(m[i]=='['&&m[i+1]==']')
                {
                    sum1++;
                    sum2++;
                }
                else if(m[i]=='('&&m[i+1]==')')
                    sum1++;
                else
                    sum2++;
            }
            if(n[i]=='('&&n[i+1]==')')
            {
                if(m[i]=='('&&m[i+1]==')')
                {
                    sum1++;
                    sum2++;
                }
                else if(m[i]=='8'&&m[i+1]=='<')
                    sum1++;
                else
                    sum2++;
            }
            if(n[i]=='8'&&n[i+1]=='<')
            {
                if(m[i]=='8'&&m[i+1]=='<')
                {
                    sum1++;
                    sum2++;
                }
                else if(m[i]=='['&&m[i+1]==']')
                    sum1++;
                else
                    sum2++;
            }
        }
        if(sum1>sum2)
            cout<<"TEAM 1 WINS"<<endl;
        if(sum1<sum2)
            cout<<"TEAM 2 WINS"<<endl;
        if(sum1==sum2)
            cout<<"TIE"<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}
