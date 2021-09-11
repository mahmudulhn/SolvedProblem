#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int x1,y1,x2,y2;
    while(cin>>x1>>y1>>x2>>y2)
    {
        if(x1==x2)
            cout<<x1+(abs(y1-y2))<<" "<<y1<<" "<<x2+(abs(y1-y2))<<" "<<y2<<endl;
        else if(y1==y2)
            cout<<x1<<" "<<y1+(abs(x1-x2))<<" "<<x2<<" "<<y2+(abs(x1-x2))<<endl;
        else if(abs(x1-x2)==abs(y1-y2))
            cout<<x1<<" "<<y2<<" "<<x2<<" "<<y1<<endl;
        else
            cout<<"-1"<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}
