
#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,m;
    while(cin>>n>>m)
    {
        string a[n],b[m];
        int count1=0,count2=0;
        for(int i=0;i<m;i++)
            b[i]="";
        for(int i=0;i<n;i++)
               cin>>a[i];
        string s="",s1="";
        for(int i=0;i<m;i++)
            s+='.';
        for(int i=0;i<n;i++)
            s1+='.';
//        cout<<s<<endl;
//        cout<<s1<<endl;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                b[j]+=a[i][j];
            }
        }
        for(int i=0;i<n;i++)
        {
            if(a[i]==s)
                count1++;
        }
        for(int i=0;i<m;i++)
        {
            if(b[i]==s1)
                count2++;
        }
        cout<<(count1*m)+count2*(n-count1)<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}
