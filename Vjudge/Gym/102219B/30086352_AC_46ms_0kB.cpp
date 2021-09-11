#include<bits/stdc++.h>

using namespace std;

void play(){

    int t;

    cin >> t;

    while( t-- ){

        int h, w;

        cin >> h >> w;


        if( h == w ) cout << "YES" <<endl;

        else    cout << "NO" <<endl;

    }

}

int main(){

    ios_base::sync_with_stdio(false);

    cin.tie( NULL );

    cout.tie( NULL );

    play();

}
