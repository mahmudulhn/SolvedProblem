#include<bits/stdc++.h>

using namespace std;

int a[ 100000 ];

int lowBound(int l, int h, int k){

    int mid = 0;

    int ind = -1;

    //cout <<" ok " << endl;

    while( l <= h){

        mid = ( l + h ) / 2;

        if( a[ mid ] == k ) return mid;

        else if( a[ mid ] > k ) h = mid  - 1;

        else if( a[ mid ] < k ) l = mid + 1;

        //cout << l << h <<endl;
    }

    return l;
}

int upperBound(int l, int h, int k){

    int mid = 0;

    int ind = -1;

    //cout <<" ok " << endl;

    while( l <= h){

        mid = ( l + h ) / 2;

        if( a[ mid ] == k ) return mid;

        else if( a[ mid ] > k ) h = mid - 1;

        else if( a[ mid ] < k ) l = mid + 1;

        //cout << l << h <<endl;
    }

    return h;
}

void play(){

    int tc;

    while( cin >> tc ){

        for(int i = 1; i <= tc; i++){

            cout << "Case " << i << ":" <<endl;

            int n, q, x, y;

            cin >> n >> q;

            memset( a, 0, sizeof a );

            for(int j = 0; j < n; j++)  cin >> a[ j ];

            for( int j = 0; j < q; j++ ){

                cin >> x >> y;

                cout <<  upperBound( 0, n - 1, y ) - lowBound( 0, n - 1, x ) + 1  <<endl;;


            }




        }

    }

}

int main(){

    /*ios_base::sync_with_stdio( false );

    cin.tie( NULL );

    cout.tie( NULL );*/

    play();

}

