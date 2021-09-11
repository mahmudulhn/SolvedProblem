#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,sumr=0,sumc=0;
    while(scanf("%d",&n))
    {
    if(n==0)
        return 0;
    int a[n][n];
    stack<int>r,c;
    for(int i=0;i<n;i++)
    {
        sumr=0;
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
            sumr+=a[i][j];
        }
        if(sumr%2!=0)
            r.push(i+1);
    }
    for(int j=0;j<n;j++)
    {
        sumc=0;
        for(int i=0;i<n;i++)
            sumc+=a[i][j];
        if(sumc%2!=0)
            c.push(j+1);
    }
    if(c.size()==0&&r.size()==0)
        printf("OK\n");
    else if(c.size()==1&&r.size()==1)
        printf("Change bit (%d,%d)\n",r.top(),c.top());
    else
        printf("Corrupt\n");
    }
    return 0;
}



