#include<iostream>
#include<queue>

using namespace std;
int main()
{
    int n,i;
    while(cin>>n)
    {
        if(n==0)
            break;
        else if(n==1)
        {
            cout<<"Discarded cards:"<<endl;
            cout<<"Remaining card: 1"<<endl;
        }
        else
        {
            queue<int> cards;
            for(i=1;i<=n;i++)
                cards.push(i);
            cout<<"Discarded cards: "<<cards.front();
            cards.pop();
            cards.push(cards.front());
            cards.pop();
            while(cards.size()>1)
            {
                cout<<", "<<cards.front();
                cards.pop();
                cards.push(cards.front());
                cards.pop();
            }
            cout<<endl;
            cout<<"Remaining card: "<<cards.front()<<endl;
        }
    }
    return 0;
}
