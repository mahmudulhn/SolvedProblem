#include<bits/stdc++.h>
using namespace std;
void solve()
{
    long long m,n;
    while(cin>>n>>m)
    {
        long long count=0;
        while(n--)
        {
            char c;
            long long a;
            cin>>c>>a;
            if(c=='-')
            {
                if((m-a)>=0)
                    m-=a;
                else
                    count++;
            }
            else
                m+=a;
        }
        cout<<m<<" "<<count<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}

