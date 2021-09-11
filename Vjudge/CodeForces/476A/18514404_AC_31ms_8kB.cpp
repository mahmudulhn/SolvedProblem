#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a,ans;
    cin>>n>>m;
    if(n<m)
        cout<<"-1\n";
    else
    {
        if((n%2==0)&&((n/2)%m==0))
            cout<<n/2<<endl;
        else
        {
            ans=(n/2)+1;
            while(ans%m!=0)
                ans++;
            cout<<ans<<endl;
        }

    }

}