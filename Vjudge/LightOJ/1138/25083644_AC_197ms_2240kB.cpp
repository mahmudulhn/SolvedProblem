#include<bits/stdc++.h>

using namespace std;

#define ll long long

#define Max 1000000000

vector< ll > v;

ll pw( int p){

    ll ans=1;

    while( p-- ) ans *= 5;

    return ans;
}


ll findTrailingZeroes(ll n){

        int x = 0, c = 0;

        while( (n / pw( c++ ) ) ) x += (n / pw( c ) );

        return x;
}

ll searchAns( ll l, ll h, ll key){

    while( l <= h ){

        ll mid = ( l+h ) / 2;

        ll temp = findTrailingZeroes( mid );

        //cout<<temp<<endl;

        if( temp == key ){

            temp = findTrailingZeroes( mid - 1);

            while( temp == key ){
                mid--;
                temp = findTrailingZeroes( mid - 1);
            }

            return mid;

        }

        else if( temp < key ) l = mid + 1;

        else h = mid - 1;

    }

    return -1;

}

void play(){

    int tc;

    while( cin>> tc ){

        int cas = 1, n;

        while( tc-- ){

            cin>> n;

            ll res=searchAns(1,Max,n);

            if( res != -1 ) cout<<"Case "<<cas++<<": "<<res<<endl;

            else cout<<"Case "<<cas++<<": impossible"<<endl;
        }
    }
}

int main(){

    ios_base::sync_with_stdio( false );

    cin.tie( NULL );

    cout.tie( NULL );

    play();

}


