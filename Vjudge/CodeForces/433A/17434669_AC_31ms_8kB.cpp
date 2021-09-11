#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int count1=0,count2=0;
    while(n--)
    {
        int x;
        cin>>x;
        if(x==100)
            count1++;
        else
            count2++;
    }
    if(count1==(count2*2)||(count1%2==0&&count2%2==0)||(count1%2==0&&count2%2!=0&&count1!=0))
        cout<<"YES\n";
    else
        cout<<"NO\n";
}
