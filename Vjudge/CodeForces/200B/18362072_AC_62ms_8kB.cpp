#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    int a[n];
    float ans=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        //float s=(float)a[i]/100;
        ans+=a[i];
        //cout<<ans<<" ";
    }
    //cout<<ans<<" ";
    cout<<fixed<<setprecision(4);
    cout<<(float)ans/n<<"\n";

}
