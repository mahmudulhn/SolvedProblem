#include<bits/stdc++.h>

using namespace std;

void read(){

    freopen("in.txt","r",stdin);

}

void play(){

    int h, r, l, skyLine[ 10001 ], maxr = -1;

    memset( skyLine, 0, sizeof skyLine );

    while ( cin >> l >> h >> r ){
        
        for (int i = l; i < r; i++ ){

            if( h > skyLine[ i ] )  skyLine[ i ] = h;
            
        }

        maxr = max( maxr, r );

    }

    for( int i = 1; i < maxr; i++){

        if( skyLine[ i - 1 ] != skyLine[ i ] ){

            //if( skyLine[ i ] > skyLine[ i - 1 ] )  cout << i << " " << skyLine[ i ] <<" ";

            //else    
            cout << i  << " " << skyLine[ i ] <<" ";

        }

    }
    cout << maxr << " " << 0 << endl;
    

}

int main(){

    ios::sync_with_stdio( false );

    cin.tie( NULL );

    cout.tie( NULL );

    //read();

    play();

}