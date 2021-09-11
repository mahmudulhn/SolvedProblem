
#include<bits/stdc++.h>

using namespace std;

long long fact[ 21 ];

void preCal(){

    fact[ 0 ] = 1;

    for( int i = 1; i < 21; i++)    fact[ i ] = i * fact[ i - 1];


}



void play(){

    preCal();

    //freopen("in.txt","r",stdin);

    //freopen("out.txt","w",stdout);

    int tc, k = 1;

    cin >> tc;

    while( tc --){


        long long n;

        cin >> n;

        vector< long long >v;

        for( int i = 20; i >= 0; i-- ){

            if( fact[ i ] <= n ){

                n -= fact[ i ];

                v.push_back( i );
            }


        }

        if( n != 0) cout << "Case "<< k <<": "<< "impossible" << endl;

        else{

            cout << "Case "<< k <<": ";

            for( int i = v.size() - 1; i > 0; i--) cout << v[ i ] << "!+";

            cout << v[ 0 ] << "!" <<  endl;



        }

        k++;
    }

}

int main(){

    ios_base::sync_with_stdio( false );

    cin.tie( NULL );

    cout.tie( NULL );

    play();


}

