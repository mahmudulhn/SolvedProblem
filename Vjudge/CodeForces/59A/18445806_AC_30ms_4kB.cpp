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
            if(s[i]>='a'&&s[i]<='z')
                count++;
        }
        if(s.size()%2==0)
        {
            if(count>=(s.size()/2))
            {
                for(int i=0;i<s.size();i++)
                {
                    if(s[i]>='A'&&s[i]<='Z')
                        cout<<(char)(s[i]+32);
                    else
                        cout<<s[i];
                }
                cout<<endl;
            }
            else
            {
                for(int i=0;i<s.size();i++)
                {
                    if(s[i]>='a'&&s[i]<='z')
                        cout<<(char)(s[i]-32);
                    else
                        cout<<s[i];
                }
                cout<<endl;
            }
        }
        else
        {
            if(count>(s.size()/2))
            {
                for(int i=0;i<s.size();i++)
                {
                    if(s[i]>='A'&&s[i]<='Z')
                        cout<<(char)(s[i]+32);
                    else
                        cout<<s[i];
                }
                cout<<endl;
            }
            else
            {
                for(int i=0;i<s.size();i++)
                {
                    if(s[i]>='a'&&s[i]<='z')
                        cout<<(char)(s[i]-32);
                    else
                        cout<<s[i];
                }
                cout<<endl;
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


