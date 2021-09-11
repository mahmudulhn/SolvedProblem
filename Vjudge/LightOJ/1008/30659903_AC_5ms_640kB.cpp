#include<bits/stdc++.h>

using namespace std;

void play(){

    //freopen("in.txt","r",stdin);

    //freopen("out.txt","w",stdout);

    int tc, k = 1;

    cin >> tc;

    while( tc-- ){

        long long n;

        cin >> n;

        long long ceilOfsqrt = ceil( sqrt( n ) );

        long long extra = ( ceilOfsqrt * ceilOfsqrt ) - n;

        long long row, col;



        if( ceilOfsqrt > extra ){

            row = extra + 1;

            col = ceilOfsqrt;
        }

        else{

            row = ceilOfsqrt;

            col = n - ( ceilOfsqrt - 1) * ( ceilOfsqrt - 1) ;

        }

        if( ceilOfsqrt % 2 == 0) swap(row,col);

        cout << "Case " << k << ": " << row << " " << col << endl;


        k++;

    }



}

int main(){

    ios_base::sync_with_stdio( false );

    cin.tie( NULL );

    cout.tie( NULL );

    play();


}


