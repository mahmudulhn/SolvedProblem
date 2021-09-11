#include<bits/stdc++.h>
using namespace std;
bool cheakvowel(char c)
{
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='U'||c=='O'||c=='I'||c=='E'||c=='A')
        return true;
    else
        return false;
}
bool cheakalpabet(char c)
{
    if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
        return true;
    else
        return false;
}
int main()
{
    char c,t=45;
    int cou=0;
    while(scanf("%c",&c)==1)
    {
        if(cheakalpabet(c))
        {
            cou++;
            if(cou==1)
            {
                if(cheakvowel(c))
                    printf("%c",c);
                else
                    t=c;
            }
            else
                printf("%c",c);
        }
        else if(!cheakalpabet(c))
        {
            if(t==45)
            {
                if(cou!=0)
                    printf("ay%c",c);
                else
                    printf("%c",c);
            }

            else if(t!=45)
            {
                if(cou!=0)
                    printf("%cay%c",t,c);
                else
                    printf("%c",c);
            }
            t=45;
            cou=0;
        }
    }
}
