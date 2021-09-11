#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,j;
    scanf("%d",&test);
    j=test;
    while(test--)
    {
        int n,m,temp=0,count=0,flag=0,min=-1;
        scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(i==0)
                temp=a[i];
            else if(a[i]-a[i-1]>temp)
                temp=a[i]-a[i-1];
        }
        count=temp;
        if(temp==a[0])
            temp--;
        for(int i=1;i<n;i++)
        {
            if(a[i]-a[i-1]==temp)
                temp--;
            else if(a[i]-a[i-1]>temp)
            {
                flag=1;
                break;
            }
        }
        if(flag)
            printf("Case %d: %d\n",j-test,count+1);
        else
            printf("Case %d: %d\n",j-test,count);
    }
}
