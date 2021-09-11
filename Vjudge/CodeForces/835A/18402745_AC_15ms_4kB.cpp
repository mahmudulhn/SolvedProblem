#include<bits/stdc++.h>
using namespace std;
void solve()
{
    long long n,a,b,c,d;
    while(cin>>n>>a>>b>>c>>d)
    {
        if(((n*a)+(2*c))<((n*b)+(2*d)))
            cout<<"First"<<endl;
        if(((n*a)+(2*c))>((n*b)+(2*d)))
            cout<<"Second"<<endl;
        if(((n*a)+(2*c))==((n*b)+(2*d)))
            cout<<"Friendship"<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}




