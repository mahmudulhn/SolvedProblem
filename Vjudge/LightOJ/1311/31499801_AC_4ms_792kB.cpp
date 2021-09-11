

#include<bits/stdc++.h>

using namespace std;

long long fact[ 21 ];


void play(){


//
//    freopen("in.txt","r",stdin);
//
//    freopen("out.txt","w",stdout);

    int tc, k = 1;

    cin >> tc;

    cin.ignore();

    while( tc --){

        double v[3], a[2];

        for( int i = 0; i < 3; i++) cin >> v[ i ];

        for( int i = 0; i < 2; i++) cin >> a[ i ];

        double t[3], s[ 3 ];

        for( int i = 0; i < 2; i++){

            t[ i ] =  v[ i ] / a[ i ];

            s[ i ] = .5 * ( a[ i ] * t [ i ] * t [ i ]);

            if( !i )    t[ 2 ] = t[ 0 ];

            else{

                if( t[ 2 ] < t[ i ])    t[ 3 ] = t[ i ];
            }

        }

        //double t3 = (double)max(t[ 0], t[ 1 ]) * v[ 3 ];

        cout << "Case "<< k <<": ";

        printf("%.10lf %.10lf\n",s[ 0 ] + s[ 1 ], max(t[0],t[1]) * v[ 2 ]);

        k++;
    }

}

int main(){

    //ios_base::sync_with_stdio( false );

    //cin.tie( NULL );

    //cout.tie( NULL );

    play();


}


