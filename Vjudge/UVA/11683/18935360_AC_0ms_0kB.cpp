#include<bits/stdc++.h>
using namespace std;
void solve()
{
    //freopen("in.txt","r",stdin);
    int r,c;
    while(cin>>r)
    {
        if(r==0)
            break;
        cin>>c;
        int a[c];
        int count=0,dif=0,m=0;
        for(int i=0;i<c;i++)
        {
            cin>>a[i];
            if(r-a[i]>dif)
                count+=((r-a[i])-dif);
            dif=abs(r-a[i]);
            //m=max(m,a[i]);
        }
        cout<<count<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}

