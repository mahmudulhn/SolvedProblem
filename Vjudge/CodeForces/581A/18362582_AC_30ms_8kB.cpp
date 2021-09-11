#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,m;
    cin>>n>>m;
    cout<<min(n,m)<<" "<<(max(n,m)-min(n,m))/2<<endl;
}

