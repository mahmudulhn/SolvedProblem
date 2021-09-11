#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,m=1;
    while(cin>>n)
    {
        int c=1,f=1;
        int sum=0;
        int sum1=0;
        while(n--)
        {
            int a;
            for(int i=0;i<4;i++)
            {
                cin>>a;
                if(f==1)
                    sum1+=a;
                else
                    sum+=a;
            }
            f=2;
            //cout<<sum<<" "<<sum1<<endl;
            if(sum>sum1)
                c++;
            sum=0;
        }
        cout<<c<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}