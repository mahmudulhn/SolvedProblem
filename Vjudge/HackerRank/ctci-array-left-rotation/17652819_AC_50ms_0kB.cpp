#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    queue<int>q;
    while(n--)
    {
        int x;
        cin>>x;
        q.push(x);
    }
    while(m--)
    {
        int x=q.front();
        q.pop();
        q.push(x);
    }
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<"\n";

}
