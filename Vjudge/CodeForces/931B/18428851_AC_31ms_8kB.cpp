#include<bits/stdc++.h>
using namespace std;
//int a[]={2,4,6,8,10,12,14,16,32,64,128,256};
void solve()
{
    int s,n,m;
    while(cin>>s>>n>>m)
    {
        int count=0;
        if(n>m)
            swap(n,m);
        if(n<=(s/2)&&m>(s/2))
            cout<<"Final!"<<endl;
        else
        {
            while(n!=m)
            {
                if(n%2==0)
                    n/=2;
                else
                    n=(n/2)+1;
                if(m%2==0)
                    m/=2;
                else
                    m=(m/2)+1;
                count++;
            }
            cout<<count<<endl;
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
