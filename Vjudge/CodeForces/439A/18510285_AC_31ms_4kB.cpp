#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,m;
    while(cin>>n>>m)
    {
        int a[n],count=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            count+=a[i];
        }
        if(((n-1)*10)+count>m)
            cout<<-1<<endl;
        else
        {
            //cout<<abs((count+(n-1)*10)-m)<<endl;
            if(abs((count+(n-1)*10)-m)>=5)
                cout<<((n-1)*2)+(abs((count+(n-1)*10)-m)/5)<<endl;
            else
                cout<<(n-1)*2<<endl;
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
