
#include<bits/stdc++.h>

using namespace std;

void play(){

    int tc;

    while( cin >> tc ){

        int max_ = -1, sum = 0, n, m = tc;

        while( tc-- ){


            cin >> n;

            max_ = max( max_, n);

            sum += n;


        }

        cout << ( max_ * m ) - sum << endl;

    }

}

int main(){

    ios_base::sync_with_stdio( false );

    cin.tie( NULL );

    cout.tie( NULL );

    play();

}


