#include<iostream>
#include<stdio.h>
#include<math.h>
#include<string>
#include<string.h>
#include<algorithm>
#include<vector>

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
    long long test;
    scanf("%lld",&test);
    getchar();
    while(test--)
    {
        char num[1000];
        gets(num);
        long long i,j,a=0,gcd,max=0;
        vector<long long>vec;
        vector<long long>::iterator it;
        vector<long long>::iterator jt;
        for(i=0;i<strlen(num);i++)
        {
            if(num[i]!=' ')
            {
                a=(a*10)+(num[i]-'0');
            }
            if(num[i]==' '||num[i]=='\n')
            {
                if(a!=0)
                    vec.push_back(a);
                a=0;
            }
        }
        if(a!=0)
            vec.push_back(a);
        a=0;
        for(it=vec.begin();it!=vec.end();it++)
        {
            for(jt=it+1;jt!=vec.end();jt++)
            {
                gcd=getG(*it,*jt);
                if(max<gcd)
                    max=gcd;
            }
        }
        printf("%lld\n",max);
    }
    return 0;
}
