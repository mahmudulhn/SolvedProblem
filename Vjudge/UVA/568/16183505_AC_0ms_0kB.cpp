#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int non[]={1, 1, 2, 6, 4, 2, 2, 4, 2, 8};
int getNonZeroDig(int n)
{
    if(n<10)
        return non[n];
    else if((n/10)%2==0)
        return 6*getNonZeroDig(n/5)*getNonZeroDig(n%10);
    else
        return 4*getNonZeroDig(n/5)*getNonZeroDig(n%10);

}

int main()
{
    int n;
    while(cin>>n)
    {
        if(n<10)
            cout<<"    "<<n<<" -> "<<getNonZeroDig(n)%10<<"\n";
        else if(n<100)
            cout<<"   "<<n<<" -> "<<getNonZeroDig(n)%10<<"\n";
        else if(n<1000)
            cout<<"  "<<n<<" -> "<<getNonZeroDig(n)%10<<"\n";
        else if(n<10000)
            cout<<" "<<n<<" -> "<<getNonZeroDig(n)%10<<"\n";
        else
            cout<<n<<" -> "<<getNonZeroDig(n)%10<<"\n";
    }
    return 0;
}


