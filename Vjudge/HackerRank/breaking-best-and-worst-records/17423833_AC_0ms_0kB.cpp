#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,countmin=-1,countmax=-1,max=-125,min=1000000000;
    cin>>n;
    while(n--)
    {
        cin>>x;
        if(x<min)
        {
            min=x;
            countmin++;
        }

        if(x>max)
        {
            max=x;
            countmax++;
        }
    }
    cout<<countmax<<" "<<countmin<<"\n";
}
