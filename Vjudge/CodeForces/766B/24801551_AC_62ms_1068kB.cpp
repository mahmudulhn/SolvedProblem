#include<bits/stdc++.h>
using namespace std;
vector<int>v;
//vector<int>::iterator it;
int n;
bool check(int l,int h,int k){
    //cout<<l<<" "<<h<<endl;
   // if(l>h); swap(l,h);
    while(l <= h){
        int mid = ( l+h ) / 2;
        //cout<<v[ mid ]<<endl;
        if( v[ mid ] < k) return true;
        else if(v [ mid ] >= k) h = mid-1;
    }
    return false;
}
void play(){
   // freopen("in.txt", "r", stdin);
    while( cin>> n ){
        v.clear();
        while( n-- ){
            int x;
            cin>> x;
            v.push_back( x );
        }
        sort(v.begin(), v.end());
        bool f=0;
       // if( v.size() == 3 and v[ 0 ] + v[ 1 ] > v[ 2 ]){
        //        cout<<"YES"<<endl;
         //       f=1;
         //       break;
        //    }
       // else{
            for(int i = 0; i<v.size()-1;  ++i){
                int a = v[ i ]+v[ i+1 ];
                //cout<<a<<endl;
                //int check=
    //            it=lower_bound(v.begin(), v.end(), a);
                if( check(i+2, v.size()-1, a) ){
                    cout<<"YES"<<endl;
                    f=1;
                    break;
                }
            }
       // }
        if(!f) cout<< "NO"<< endl;
    }
}

int main(){

    ios_base::sync_with_stdio( false );
    cin.tie( NULL );
    cout.tie( NULL );
    play();

}
