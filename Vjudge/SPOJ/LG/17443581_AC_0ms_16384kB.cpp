#include <bits/stdc++.h>
using namespace std;
long long gcd(long long a, long long b) {
  if (b == 0)
    return a;
    return gcd(b, a % b);
}
long long lcm(long long a, long long b) { return (a * b) / gcd(a, b); }
int main()
{
    int n;
    while(cin>>n)
    {
        long long a[n],lm;
        cin>>a[0];
        lm=a[0];
        for(int i=1;i<n;i++)
        {
            cin>>a[i];
            lm=lcm(lm,a[i]);
        }
        cout<<lm<<"\n";
    }
}
