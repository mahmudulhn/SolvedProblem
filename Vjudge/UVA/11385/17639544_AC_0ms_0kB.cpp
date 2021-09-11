#include<bits/stdc++.h>
using namespace std;
double GoldenRatio=(sqrt(5)+1)/2;

long long fib(int n)
{
    return round(log(n*sqrt(5))/log(GoldenRatio));
}
int arr[110];
void tiktik()
{
    for(int i=1;i<=110;i++)
        arr[i]=i;
}
int main()
{
    //tiktik();
    int test;
    scanf("%d",&test);
    while(test--)
    {
        int n;
        map<int,char>mp;
        map<int,char>::iterator it;
        scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        getchar();
        char c;
        int j=0;
        string s;
        getline(cin,s);
        for(int i=0;i<s.length();i++)
        {
            if((s[i]>='A'&&s[i]<='Z')&&j<n)
            {
                mp[fib(a[j])]=s[i];
                j++;
            }
        }
        int temp=1;
        for(it=mp.begin();it!=mp.end();)
        {
            if(it->second!=mp[++temp])
                printf(" ",it->second);
            else
            {
                printf("%c",it->second);
                it++;
            }
        }
        printf("\n");
//        cout<<s<<"\n";
    }
}
