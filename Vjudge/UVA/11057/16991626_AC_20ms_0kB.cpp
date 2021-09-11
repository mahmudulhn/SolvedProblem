#include<bits/stdc++.h>
using namespace std;
int a[100005];
int BSearch(int key,int low,int high)
{
    while(low<=high)
    {
        int mid=(high+low)/2;
        if(a[mid]==key)
            return 1;
        else if(a[mid]>key)
            high=mid-1;
        else if(a[mid]<key)
            low=mid+1;
    }
    return 0;
}
int main()
{
    int n;
    while(cin>>n)
    {
        int money,x,y,dif=10e6,k,b;
        for(int i=0;i<n;i++)
            cin>>a[i];
        cin>>money;
        sort(a,a+n);
        for(int i=0;i<n;i++)
        {
            k=money-a[i];
            b=abs(k-a[i]);
            if((BSearch(k,i,n-1)==1)&&(dif>b))
            {
                x=a[i];
                y=k;
                dif=b;
            }
        }
        if(x<y)
            cout<<"Peter should buy books whose prices are "<<x<<" and "<<y<<".\n\n";
        else
            cout<<"Peter should buy books whose prices are "<<y<<" and "<<x<<".\n\n";
    }
    return 0;
}

