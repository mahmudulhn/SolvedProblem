#include<iostream>
#include<stdio.h>
#include<math.h>

using namespace std;

long long getG(long long i,long long j)
{
    if(i%j==0)
        return j;
    else
    {
        return getG(j,i%j);
    }
}

int main()
{
    long long i,j,G,n;
    while(cin>>n)
    {
        if(n==0)
            break;
        G=0;
        for(i=1;i<n;i++)
        {
            for(j=i+1;j<=n;j++)
                G+=getG(i,j);
        }
        cout<<G<<endl;
    }
    return 0;
}
