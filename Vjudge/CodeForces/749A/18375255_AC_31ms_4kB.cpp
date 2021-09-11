#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    cout<<n/2<<endl;
    if(n%2==0)
    {
        for(int i=0; i<n/2; i++)
            cout<<2<<" ";
        cout<<endl;
    }
    else
    {
        for(int i=1; i<n/2; i++)
            cout<<"2 ";
        cout<<3<<endl;
    }
}
