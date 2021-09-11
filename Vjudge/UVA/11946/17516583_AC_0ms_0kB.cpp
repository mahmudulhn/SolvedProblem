#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    scanf("%d",&test);
    getchar();
    while(test--)
    {
        char a[850];
        while(gets(a))
        {
            if(strlen(a)==0)
            {
                cout<<endl;
                break;
            }
            for(int i=0;i<strlen(a);i++)
            {
                if(a[i]=='4')
                    printf("A");
                else if(a[i]=='8')
                    printf("B");
                else if(a[i]=='3')
                    printf("E");
                else if(a[i]=='6')
                    printf("G");
                else if(a[i]=='1')
                    printf("I");
                else if(a[i]=='0')
                    printf("O");
                else if(a[i]=='9')
                    printf("P");
                else if(a[i]=='5')
                    printf("S");
                else if(a[i]=='7')
                    printf("T");
                else if(a[i]=='2')
                    printf("Z");
                else
                    printf("%c",a[i]);
            }
            cout<<endl;
        }
    }
}
