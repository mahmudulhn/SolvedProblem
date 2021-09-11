#include<bits/stdc++.h>

using namespace std;

#define Max 3000000

#define ull unsigned long long

bool isprime[ Max + 5 ];

int phi [ Max + 5 ];

ull ans[ Max ], f[ Max ];

void toPhi(){

    phi[ 1 ] = 1;

    for( int i = 1; i <= Max; i++ ) phi [ i ] = i;

    for( int i = 2; i <= Max; i++ ){

        if( !isprime[ i ] ){

            for( int j = i;  j <= Max;  j += i ){

                isprime[ j ] = true;

                phi[ j ] =  phi[ j ] / i * ( i - 1 );

            }
        }
    }

    ans[ 0 ] = 0;

    ans[ 1 ] = ans[ 0 ];

    for( ull i = 2; i <= Max; i++ ){

        for( ull j = i; j <= Max; j += i ) f [ j ] +=  ( (j * phi[ i ] / 2 ) * i);

        ans[ i ] = ans[ i - 1 ] + f[ i ];

        //cout<<i<<" "<<ans[i]<<endl;

    }
}

void letsPlay(){

    int tc;

    while( cin>> tc ){

        int n;

        for( int i = 1; i <= tc; i++ ){

            cin>> n;

            cout<<"Case "<<i<<": "<<ans[ n ]<<endl;

        }

    }

}

int main(){

//    ios_base::sync_with_stdio( false );
//
//    cin.tie( NULL );
//
//    cout.tie( NULL );

    toPhi();

    letsPlay();

}
