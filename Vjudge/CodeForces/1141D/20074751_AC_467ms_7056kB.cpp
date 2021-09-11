#include<bits/stdc++.h>
using namespace std;
vector<int>l[30];
vector<int>r[30];
vector<pair<int,int> >ind;
int mark1[30];
int mark2[30];
void solve()
{
    //freopen("in.txt","r",stdin);
    int n;
    while(cin>>n)
    {
        for(int i=0;i<30;i++){
            l[i].clear();
            r[i].clear();
        }
        ind.clear();
        stack<int>ex;
        stack<int>ey;
        stack<int>qx;
        stack<int>qy;
        memset(mark1,0,sizeof mark1);
        memset(mark2,0,sizeof mark2);
        string s1,s2;
        cin>>s1>>s2;
        for(int i=0;i<n;i++)
        {
            if(s1[i]=='?')
            {
                mark1[27]++;
                qx.push(i+1);
            }
            else{
                l[s1[i]-'a'].push_back(i+1);
                mark1[s1[i]-'a']++;
            }
            if(s2[i]=='?'){
                mark2[27]++;
                qy.push(i+1);
            }
            else{
                r[s2[i]-'a'].push_back(i+1);
                mark2[s2[i]-'a']++;
            }
        }
//        for(int i=0;i<30;i++)
//        {
//            cout<<i<<"\t";
//            for(int j=0;j<l[i].size();j++)
//                cout<<l[i][j]<<" ";
//            cout<<endl;
//        }
//        for(int i=0;i<30;i++)
//        {
//            cout<<i<<"\t";
//            for(int j=0;j<r[i].size();j++)
//                cout<<r[i][j]<<" ";
//            cout<<endl;
//        }
        int count_1=0,count_2=0,ans=0,st[30],temp=0;
        memset(st,0,sizeof st);
        for(int i=0;i<26;i++)
        {
            temp=min(mark1[i],mark2[i]);
            st[i]=temp;
            mark1[i]-=temp;
            mark2[i]-=temp;
            ans+=temp;
            int j=0;
            while(temp--)
            {
                ind.push_back(make_pair(l[i][j],r[i][j]));
                j++;
            }
        }
//        for(int i=0;i<30;i++)
//            cout<<st[i]<<" ";
//        cout<<endl;
        //st[27]=min(mark1[27],mark2[27]);
        for(int i=0;i<26;i++){
            if(mark1[i]){
                int j=st[i];
                while(mark1[i]--)
                {
                    ex.push(l[i][j]);
                    j++;
                }
            }
        }
        for(int i=0,j=0;i<26;i++){
            if(mark2[i]){
                int j=st[i];
                while(mark2[i]--){
                    ey.push(r[i][j]);
                    j++;
                }
            }
        }
//        for(int i=0;i<ex.size();i++)
//            cout<<ex[i]<<" ";
//        cout<<endl;
//        for(int i=0;i<ey.size();i++)
//            cout<<ey[i]<<" ";
//        cout<<endl;
        count_1=mark1[27]+mark2[27];
        if(count_1+ans>n){
            cout<<n<<endl;
            pair<int ,int>p;
            for(int i=0;i<ans;i++)
            {
                p=ind[i];
                cout<<p.first<<" "<<p.second<<endl;
            }
            int k=ans;
            while(!ex.empty()&&!qy.empty())
            {
                int a=ex.top();
                int b=qy.top();
                ex.pop();
                qy.pop();
                cout<<a<<" "<<b<<endl;
                k++;
                if(k==n)
                    break;
            }
            while(!ey.empty()&&!qx.empty())
            {
                int a=ey.top();
                int b=qx.top();
                ey.pop();
                qx.pop();
                cout<<b<<" "<<a<<endl;
                k++;
                if(k==n)
                    break;
            }
            while(!qx.empty()&&!qy.empty())
            {
                int a=qx.top();
                int b=qy.top();
                qx.pop();
                qy.pop();
                cout<<a<<" "<<b<<endl;
                k++;
                if(k==n)
                    break;
            }
        }
        else{
            cout<<count_1+ans<<endl;
            pair<int ,int>p;
            for(int i=0;i<ans;i++)
            {
                p=ind[i];
                cout<<p.first<<" "<<p.second<<endl;
            }
            while(!ex.empty()&&!qy.empty())
            {
                int a=ex.top();
                int b=qy.top();
                ex.pop();
                qy.pop();
                cout<<a<<" "<<b<<endl;
            }
            while(!ey.empty()&&!qx.empty())
            {
                int a=ey.top();
                int b=qx.top();
                ey.pop();
                qx.pop();
                cout<<b<<" "<<a<<endl;
            }

        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}
