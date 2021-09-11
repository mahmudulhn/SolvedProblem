#include<bits/stdc++.h>
using namespace std;
int f[]={1,2,3,5,8,13,21,34,55,89,144,233,377,610,987};
bool a[1001];
void prec()
{
    for(int i=0,j=0;i<=1000;i++)
    {
        if(i==f[j])
        {
            j++;
            a[i]=true;
        }
    }
}
void solve()
{
    int n;
    while(cin>>n)
    {
        int a,b,c;
        for(int i=1;i<n;i++)
        {
            a=i;
            b=i;
            c=n-(2*i);
            if(a%3!=0&&c%3!=0)
                break;
        }
        cout<<a<<" "<<b<<" "<<c<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    prec();
    solve();
}
