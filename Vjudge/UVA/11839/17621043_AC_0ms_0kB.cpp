#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    while(scanf("%d",&test)&&test!=0)
    {
        while(test--)
        {
            int a[5],i=5;
            vector<int>v;
            vector<int>::iterator it;
            for(i=0;i<5;i++)
            {
                scanf("%d",&a[i]);
                if(a[i]<=127)
                    v.push_back(i);
            }
//            for(int k=0;k<5;k++)
//                printf("%d ",a[k]);
//            for(it=v.begin();it!=v.end();it++)
//                printf("%d",*it);
            if(v.size()==1)
                printf("%c\n",v[0]+'A');
            else
                printf("*\n");
        }
    }
}
