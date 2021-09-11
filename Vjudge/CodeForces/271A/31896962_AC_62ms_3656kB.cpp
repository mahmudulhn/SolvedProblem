#include<bits/stdc++.h>

using namespace std;

void play(){

    int n;

    cin >> n;

    int i = n / 1000;

    n %= 1000;

    int j = n / 100;

    n %= 100;

    int k = n / 10;

    int l = ( n % 10 ) + 1;

    bool flag = 0;

    for( ; i <= 9 && flag == 0; i++){

        for( ; j <= 9 && flag == 0; j++){

            for( ; k <= 9 && flag == 0; k++){

                for( ; l <= 9 && flag == 0; l++){

                        if( i != j && j != k && k != l && i != k && i != l && j != l && flag == 0){

                            cout << i << j << k << l<< endl;

                            flag = 1;

                        }

                        //else cout << i << j << k << l<< endl;

                }

                l = 0;

            }

            k = 0;
        }

        j = 0;

    }


}

int main(){

    ios_base::sync_with_stdio( false );

    cin.tie( NULL );

    cout.tie( NULL );

    play();

}
