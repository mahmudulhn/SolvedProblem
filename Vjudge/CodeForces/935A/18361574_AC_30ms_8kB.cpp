#include<bits/stdc++.h>
using namespace std;
int solve(int n)
{
    int count=0,s=sqrt(n);
    for(int i=1;i<=s;i++)
    {
        if(n%i==0)
        {
            if((n/i)==i)
                count++;
            else
                count+=2;
        }
    }
    return count-1;
}
int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    cout<<solve(n)<<endl;
}
