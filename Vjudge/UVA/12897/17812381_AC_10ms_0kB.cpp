#include<bits/stdc++.h>
using namespace std;
int ind[28];
void nothing()
{
    for(int i=0;i<=28;i++)
        ind[i]=i;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int l,n,test;
    cin>>test;
    while(test--)
    {
        string a;
        cin>>a;
        nothing();
        cin>>n;
        while(n--)
        {
            char x,y;
            int o,p;
            cin>>x>>y;
            o=x;
            p=y;
            if(x!=y)
            {
                for(int i=0;i<=28;i++)
                {
                    if(ind[i]==p-'A')
                        ind[i]=(o-'A');
                }
            }
        }
        for(int i=0;i<a.size();i++)
        {
            if(a[i]>='A'&&a[i]<='Z')
                a[i]=ind[a[i]-65]+65;
        }
        cout<<a<<endl;
    }
}
