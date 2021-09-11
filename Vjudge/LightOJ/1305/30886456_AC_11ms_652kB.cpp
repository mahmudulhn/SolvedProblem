#include<bits/stdc++.h>

using namespace std;



void play(){

    //freopen("in.txt","r",stdin);

    //freopen("out.txt","w",stdout);

    int tc, k = 1;

    cin >> tc;

    while( tc --){

        vector< pair< int , int > >points;

        int x, y, X, Y;

        for( int i = 0; i < 3; i++){

            cin >> x >> y;

            points.push_back( make_pair( x, y) );


            //cout << x << " " << y << endl;

        }

        X =  ( points[ 2 ].first - points[ 1 ].first ) + points[ 0 ].first;

        Y =  ( points[ 2 ].second - points[ 1 ].second ) + points[ 0 ].second;



        //cout << X << " " << Y << endl;

        points.push_back( make_pair( X, Y) );

        long long area = 0.5 * (points[ 0 ].first * points[ 1 ].second + points[ 1 ].first * points[ 2 ].second + points[ 2 ].first * points[ 3 ].second + points[ 3 ].first * points[ 0 ].second - points[ 1 ].first * points[ 0 ].second - points[ 2 ].first * points[ 1 ].second - points[ 3 ].first * points[ 2 ].second - points[ 0 ].first * points[ 3 ].second);

        cout << "Case "<< k <<": "<< X << " " << Y << " " << abs(area) << endl;

        k++;
    }

}

int main(){

    ios_base::sync_with_stdio( false );

    cin.tie( NULL );

    cout.tie( NULL );

    play();


}
