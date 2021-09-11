#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    int a,b,count1=0,count2=0;
    while(n--)
    {
        cin>>a>>b;
        if(a>b)
            count1++;
        if(a<b)
            count2++;
    }
    if(count1>count2)
        cout<<"Mishka\n";
    if(count1<count2)
        cout<<"Chris\n";
    if(count1==count2)
        cout<<"Friendship is magic!^^\n";
}
