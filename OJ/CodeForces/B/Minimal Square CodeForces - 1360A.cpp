
#include<bits/stdc++.h>

using namespace std;

void play(){

    int tc;

    while( cin >> tc ){

        while( tc-- ){

            int a, b;

            cin >> a >> b;

            if( a > b)  swap(a, b);



            cout << max(a + a, b) * max(a + a, b) << endl;

        }



    }

}

int main(){

    ios_base::sync_with_stdio( false );

    cin.tie( NULL );

    cout.tie( NULL );

    play();

}



