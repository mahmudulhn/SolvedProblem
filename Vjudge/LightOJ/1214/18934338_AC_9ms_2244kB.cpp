#include<bits/stdc++.h>
using namespace std;
void solve()
{
    //freopen("in.txt","r",stdin);
    int n;
    while(cin>>n)
    {
        for(int j=1;j<=n;j++)
        {
            string s;
            long long b;
            unsigned long long a=0;
            cin>>s;
            cin>>b;
            b=abs(b-0);
            if(s[0]=='-')
            {
                for(int i=1;i<s.size();i++)
                {
                    a=s[i]-'0'+a*10;
                    a=a%b;
                }
                if(!a)
                    cout<<"Case "<<j<<": divisible"<<endl;
                else
                    cout<<"Case "<<j<<": not divisible"<<endl;
            }
            else
            {
                for(int i=0;i<s.size();i++)
                {
                    a=s[i]-'0'+a*10;
                    a=a%b;
                }
                if(!a)
                    cout<<"Case "<<j<<": divisible"<<endl;
                else
                    cout<<"Case "<<j<<": not divisible"<<endl;
            }
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

