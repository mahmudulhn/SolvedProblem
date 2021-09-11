
#include<bits/stdc++.h>

using namespace std;

void play(){

    int tc;

    while( cin >> tc ){

        while( tc-- ){

            int n;

            cin >> n;

            if(  n  % 4 != 0) cout<< "NO" << endl;

            else{

                cout << "YES" << endl;

                int sumEven = 0, sumOdd = 0;

                for(int i = 1; i <= n / 2; i++ ){

                    cout << i * 2 << " ";

                    sumEven += ( i * 2 );

                }

                for(int i = 1; i <= ( n / 2 ) - 1; i++ ){

                    cout << ( i * 2 ) - 1 << " ";

                    sumOdd += ( ( i * 2 ) - 1 );


                }

                cout << sumEven - sumOdd << endl;
            }



        }

    }

}

int main(){

    ios_base::sync_with_stdio( false );

    cin.tie( NULL );

    cout.tie( NULL );

    play();

}

