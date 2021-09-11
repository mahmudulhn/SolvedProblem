#include<bits/stdc++.h>

using namespace std;

#define ll long long

#define ull unsigned long long

#define Max 1000000

int diff = 0, dif = 0;

int NumOfTwo( int a ){

    int count_two = 0;

    while( a % 2 == 0){

        a /= 2;

        count_two++;

    }

    return count_two;

}


int NumOfFive( int a ){

    int count_five = 0;

    while( a % 5 == 0){

        a /= 5;

        count_five++;

    }

    return count_five;
}

ll pw( int p, int a){

    ll ans=1;

    while( p-- ) ans *= a;

    return ans;
}

int findTrailingZeroes( int  n){

        int x = 0, c = 0;

        while( (n / pw( c++, 5 ) ) ) x += (n / pw( c, 5 ) );

        return x;
}

int findNumberOftwo( int  n){

        int x = 0, c = 0;

        while( (n / pw( c++, 2 ) ) ) x += (n / pw( c, 2 ) );

        return x;
}

void play(){

    int tc;

    while( cin>> tc ){

        int cas = 1, n, r, p, q;

        while( tc-- ){

            cin>> n >> r >> p >> q;

            cout<<"Case "<<cas++<<": "<< min( ( findTrailingZeroes( n ) - ( findTrailingZeroes( r ) + findTrailingZeroes( n -r ) ) ) + ( NumOfFive( p ) * q), ( findNumberOftwo( n ) - ( findNumberOftwo( r ) + findNumberOftwo( n -r ) ) ) + ( NumOfTwo( p ) * q) ) << endl;

        }
    }
}

int main(){

    ios_base::sync_with_stdio( false );

    cin.tie( NULL );

    cout.tie( NULL );

    //freopen( "in.txt", "r", stdin);

   // freopen( "out.txt", "w", stdout);

    play();

}


