#include<bits/stdc++.h>
using namespace std;
void sol()
{
    for(int i=2;i<=200;i++)
    {
        for(int j=2;j<=200;j++)
        {
            for(int k=j;k<=200;k++)
            {
                for(int l=k;l<=200;l++)
                {
                    if(i*i*i==((j*j*j)+(k*k*k)+(l*l*l)))
                        printf("Cube = %d, Triple = (%d,%d,%d)\n",i,j,k,l);
                }
            }
        }
    }
}
int main()
{
    sol();
}
