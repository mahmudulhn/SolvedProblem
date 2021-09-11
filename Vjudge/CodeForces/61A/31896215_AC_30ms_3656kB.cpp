#include<bits/stdc++.h>

using namespace std;

void play(){

    string numberOne, numberTwo, ans = "";

    cin >> numberOne >> numberTwo;

    int ln = numberOne.size();

    for( int i = 0; i < ln; i++ ) {

        if( numberOne[ i ] != numberTwo[ i ] )  ans += '1';

        else ans += '0';
    }

    cout << ans <<endl;

}

int main(){

    ios_base::sync_with_stdio( false );

    cin.tie( NULL );

    cout.tie( NULL );

    play();

}
