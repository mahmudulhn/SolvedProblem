#include<bits/stdc++.h>
using namespace std;
int ind[28];
void nothing()
{
    for(int i=0;i<=28;i++)
        ind[i]=i;
}
int main()
{
    int l,n,c=1;
    scanf("%d%d",&l,&n);
    char a[l+2];
    scanf("%s",a);
    nothing();
    while(n--)
    {
        char x,y;
        int map1,map2;
        cin>>x>>y;
        if(x!=y)
        {
            for(int i=0;i<=28;i++)
            {
                c=0;
                if(ind[i]==x-'a')
                {
                    ind[i]=(y-'a');
                    c=1;
                }
                if(ind[i]==y-'a'&&c==0)
                {
                    ind[i]=(x-'a');
                }
            }

        }
    }
    for(int i=0;i<l;i++)
    {
        if(a[i]>='a'&&a[i]<='z')
            printf("%c",ind[a[i]-'a']+'a');
        else
            printf("%c",a[i]);
    }
    cout<<endl;
}
