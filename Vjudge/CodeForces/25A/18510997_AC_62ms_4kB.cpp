#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,m;
    while(cin>>n)
    {
        int a[n],count1=0,count2=0,x,y;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]%2==0)
            {
                count1++;
                x=i;
            }
            else
            {
                count2++;
                y=i;
            }
        }
        if(count1==1)
            cout<<x+1<<endl;
        else
            cout<<y+1<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}
