#include<iostream>
#include<map>


using namespace std;

int main()
{
    int m,n,i,cd,cunt;
    map<int, int>col;
    while(cin>>n>>m)
    {
        if(n==0&&m==0)
            break;
        cunt=0;
        for(i=1;i<=n;i++)
        {
            cin>>cd;
            col[cd]++;
        }
        for(i=1;i<=m;i++)
        {
            cin>>cd;
            col[cd]++;
        }
        for(i=1;i<=col.size();i++)
        {
            if(col[i]>1)
             cunt++;
        }
        cout<<cunt<<endl;
        col.clear();
    }
return 0;
}


