#include<bits/stdc++.h>
using namespace std;
void solve()
{
    //freopen("in.txt","r",stdin);
    int n;
    while(cin>>n)
    {
        for(int i=1;i<=n;i++){
            string s;
            cin>>s;
            int mark[27];
            memset(mark,0,sizeof mark);
            for(int j=0;j<=s.size();j++)
                mark[s[j]-'a']++;
            //cout<<"ok"<<endl;
            bool f=0;
            int c=0;
            string ans="",ans_="";
            if(s.size()%2==0)
            {
                for(int j=0;j<26;j++)
                {
                    if(mark[j]%2&&f==0){
                        cout<<"impossible"<<endl;
                        f=1;
                    }
                    else
                    {
                        int temp=mark[j]/2;
                        while(temp--)
                            ans+=(char)(j+'a');
                    }
                }
                if(!f)
                {
                    cout<<ans;
                    reverse(ans.begin(),ans.end());
                    cout<<ans<<endl;
                }
            }
            else
            {
                for(int j=0;j<26;j++)
                {
                    //cout<<"ok"<<endl;
                    if(mark[j]%2){
                        ans_+=(char)(j+'a');
                        if(mark[j]/2)
                        {
                            int temp=mark[j]/2;
                            while(temp--)
                                ans+=(char)(j+'a');
                        }
                        c++;
                    }
                    else
                    {
                        int temp=mark[j]/2;
                        while(temp--)
                            ans+=(char)(j+'a');
                    }
                }
                if(c==1)
                {
                    cout<<ans;
                    cout<<ans_;
                    reverse(ans.begin(),ans.end());
                    cout<<ans<<endl;
                }
                else if(f==0)
                    cout<<"impossible"<<endl;
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
