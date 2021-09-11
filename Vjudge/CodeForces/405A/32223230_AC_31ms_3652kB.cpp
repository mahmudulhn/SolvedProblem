

#include<bits/stdc++.h>

using namespace std;

void play(){

    int n;

    while ( cin >> n ){

        //int count = 0;

        int max_ = -3, a[ n ];

        for( int  i = 0; i < n; i++ ){

            cin >> a[ i ];

            //cout << count << endl;

            //if( i && a [ i ] >= a[ i - 1 ] )    count++;

            //else{

//                max_ = max(max_, count);
//
//                count = 0;
//
//            }
//        }
//
//        max_ = max(max_, count);

        }

        sort(a, a + n);

        for( int  i = 0; i < n; i++ )cout << a[ i ] <<" ";

        cout <<endl;

    }



}

int main(){

    ios_base::sync_with_stdio( false );

    cin.tie( NULL );

    cout.tie( NULL );

    play();

}
