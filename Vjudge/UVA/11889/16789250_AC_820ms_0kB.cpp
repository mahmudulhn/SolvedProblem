#include<bits/stdc++.h>

using namespace std;

long long getgcd(long long a,long long b)
{
    if(b==0)
        return a;
    else
        return getgcd(b,a%b);
}


long long getlcm(long a, long b)
{
    return (a*b)/getgcd(a,b);
}

int main()
{
    long long test,temp,j;
    cin >> test;
   C:while( test-- )
    {
        long long c,a;
        cin >> c >> a;
        if((a%c)!=0)
        {
            cout<<"NO SOLUTION\n";
            goto C;
        }
        temp=a/c;
        j=temp;
        while(1)
        {
            if((getlcm(temp,c))==a)
            {
                cout<<temp<<"\n";
                goto C;
            }
            if(temp>a)
            {
              cout<<"NO SOLUTION\n";
              goto C;
            }
            temp+=j;
        }
    }
    return 0;
}
