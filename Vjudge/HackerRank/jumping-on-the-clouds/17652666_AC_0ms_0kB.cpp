#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,jump=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;)
    {
        if(a[i+1]==1||a[i+1]==0&&a[i+2]==0)
        {
            jump++;
            i+=2;
        }
        else if(a[i+1]==0&&a[i+2]==1)
        {
            jump++;
            i++;
        }
        else if(a[i+1]==0&&a[i+2]!=0&&a[i+2]!=1)
        {
            jump++;
            i++;
            break;
        }
        else if(i==n-1)
            break;
    }
    cout<<jump<<"\n";
}
