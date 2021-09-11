#include<bits/stdc++.h>
using namespace std;
void solve()
{
    //freopen("in.txt","r",stdin);
    long long a,b,t;
    while(cin>>t)
    {
        for(int i=1;i<=t;i++)
        {
            cin>>a>>b;
            long long s=a+b;
            if(a==b)
                cout<<"Ok"<<endl;
            else
            {
                if(s%2==0)
                    cout<<s/2<<" "<<s/2<<endl;
                else
                {
                    if(abs(a-b)==1)
                    {
                        //if(a<b)
                            cout<<"Ok"<<endl;
                        //else
                            //cout<<b<<" "<<a<<endl;
                    }
                    else
                        cout<<s/2<<" "<<(s/2)+1<<endl;
                }

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
