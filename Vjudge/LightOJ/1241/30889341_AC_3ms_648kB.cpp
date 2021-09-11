#include<bits/stdc++.h>

using namespace std;

long long fact[ 21 ];


void play(){



    //freopen("in.txt","r",stdin);

    //freopen("out.txt","w",stdout);

    int tc, k = 1;

    cin >> tc;

    while( tc --){


        int n;

        cin >> n;

        int a[ n ], count_ = 0;

        for(int i = 0; i < n; i++ ){

                cin >> a[ i ];

            if( !i )    count_ +=( ceil( ( a[ i ] - 2  )/ 5.0 ) );

            else    count_ +=( ceil( (a[ i ] - a[ i - 1 ] ) / 5.0 ) ) ;



        }

        //sort(a, a + n);

        cout << "Case "<< k <<": "<< count_ << endl;

        k++;
    }

}

int main(){

    ios_base::sync_with_stdio( false );

    cin.tie( NULL );

    cout.tie( NULL );

    play();


}


