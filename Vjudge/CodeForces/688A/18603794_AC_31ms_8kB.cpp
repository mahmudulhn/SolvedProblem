
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,d;
    while(cin>>n>>d)
    {
        int flag=0,count=0,max=0;
        vector<int>v;
        while(d--)
        {
            flag=0;
            string a;
            cin>>a;
            for(int i=0;i<n;i++)
            {
                if(a[i]=='0')
                {
                    flag=1;
                    break;
                }
            }
            //cout<<flag<<" "<<count<<endl;
            if(flag==1)
                count++;
            else
            {
                v.push_back(count);
                count=0;
            }
            v.push_back(count);

        }
        cout<<*max_element(v.begin(),v.end())<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}
