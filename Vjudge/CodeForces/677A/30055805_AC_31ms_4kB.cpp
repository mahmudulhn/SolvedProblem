#include<bits/stdc++.h>

using namespace std;

void play(){

    int n, h;

    cin >> n >> h;

    int a, ans = 0;

    for( int i = 0 ; i < n ; i++ ){

        cin >> a;

        if( a <= h ) ans += 1;

        else     ans += 2;
    }

    cout << ans <<endl;

}

int main(){

    ios_base::sync_with_stdio(false);

    cin.tie( NULL );

    cout.tie( NULL );

    play();

}
