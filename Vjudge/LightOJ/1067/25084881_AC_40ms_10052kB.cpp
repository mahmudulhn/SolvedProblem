#include<bits/stdc++.h>

using namespace std;

#define ll long long

#define ull unsigned long long

#define Max 1000000

#define Mod 1000003

ll dp[ Max + 5 ];

int fib( int n ){

    dp[ 1 ] = 1;

    ll temp;

    for( int i = 2; i <= Max; ++i){

        dp[ i ] = ( dp[ i - 1 ] * i ) % Mod;

    }

}

ll bMod( ll a, ll b){

    ll ans = 1;

    while( b ){

        if( b % 2) ans = ( ans * a) % Mod;

        a = ( a * a) % Mod;

        b /= 2;

    }

    return ans;

}

void play(){

    int tc;

    while( cin>> tc ){

        int cas = 1, n, r;

        while( tc-- ){

            cin>> n >> r;

            if( 0 == r || n == r ) cout<< "Case "<< cas++<< ": "<< 1 << endl;

            else{

                cout<< "Case "<< cas++<< ": "<< ( ( dp[ n ] % Mod ) * ( bMod( dp[ r ], Mod - 2 ) % Mod ) * ( bMod( dp[ n - r ], Mod - 2 ) % Mod ) ) % Mod << endl;

            }
        }
    }
}

int main(){

    ios_base::sync_with_stdio( false );

    cin.tie( NULL );

    cout.tie( NULL );

    fib( Max );

    //for( int i = 1; i <= Max; i++)  cout<<i<<" "<<dp[i]<<endl;

    play();

}


