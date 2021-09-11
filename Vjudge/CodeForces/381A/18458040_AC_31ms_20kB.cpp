#include<bits/stdc++.h>
using namespace std;
void solve()
{
    long long n,k;
    while(cin>>n)
    {
        vector<int>v;
        while(n--)
        {
            cin>>k;
            v.push_back(k);
        }
        int sum1=0,sum2=0,flag=1;
        while(!v.empty())
        {
            if(flag==1)
            {
                if(v[0]>v[v.size()-1])
                {
                    sum1+=v[0];
                    v.erase(v.begin()+0);
                }
                else
                {
                    sum1+=v[v.size()-1];
                    v.erase(v.begin()+(v.size()-1));
                }
                flag=2;
            }
            else
            {
                if(v[0]>v[v.size()-1])
                {
                    sum2+=v[0];
                    v.erase(v.begin()+0);
                }

                else
                {
                    sum2+=v[v.size()-1];
                    v.erase(v.begin()+(v.size()-1));
                }
                flag=1;
            }
        }
        cout<<sum1<<" "<<sum2<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}




