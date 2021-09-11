
#include<bits/stdc++.h>

using namespace std;

void play(){

    int tc;

    while( cin >> tc ){

        while( tc-- ){

            int n;

            cin >> n;

            cout << n - ( (n / 2) + 1 ) <<endl;

        }

    }

}

int main(){

    ios_base::sync_with_stdio( false );

    cin.tie( NULL );

    cout.tie( NULL );

    play();

}

