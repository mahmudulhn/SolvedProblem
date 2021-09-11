#include<bits/stdc++.h>

using namespace std;

#define ll long long

#define ull unsigned long long

#define un unsigned int

#define Max 100000000

#define Mod 4294967295‬

int isprime[ ( Max >> 5 ) + 1 ];

//vector< pair< int, int > > perfectPower;

un perfectPower[ 1450 ];

un primes[ 5761460 ];

un multOfPrime[ 5761460 ];

un multOfPPower[ 1450 ];

int ind = 0, indx = 0;

//bool sortinrev( const pair< int, int > & a, const pair< int, int > & b){
//       return ( a.first < b.first );
//}

bool check( int n, int pos )   {

    return ( bool ) ( n & ( 1 << pos ) );

}
int setBit( int n, int pos){

    return n = ( n | ( 1 << pos ) );

}
un pw( un p, int a){

    un ans = 1;

    ll forCheck = 1;

    while( a-- ) {
        ans *= p ;
        forCheck *= p;
    }
    if( ans == forCheck )   return ans;

    else return 0;
}

void Mysort(){

    un temp;

    for( int i = 0; i < indx; ++i ){

        for( int j = 0; j < ( indx - i - 1 ); ++j){

            if( perfectPower [ j ] > perfectPower [ j + 1 ] ){

                temp = perfectPower[ j ];

                perfectPower [ j ] = perfectPower[ j + 1 ];

                perfectPower[ j + 1 ] = temp;

                temp = multOfPPower[ j ];

                multOfPPower [ j ] = multOfPPower[ j + 1 ];

                multOfPPower[ j + 1 ] = temp;
            }

        }

    }

}

//int Bsearch(int l, int h, int key){
//
//    int mid;
//
//    pair< int, int > p;
//
//    while( l <= h ){
//
//        mid = (l + h ) / 2;
//
//        p = perfectPower[ mid ];
//
//        if( p.first == key ) return p.second;
//
//        else if( p.first < key ) l = mid + 1;
//
//        else    h = mid - 1;
//
//        cout<<p.second<<endl;
//
//    }
//
//    return 0;
//
//}

void sieve(){

    int sqrtMax = ( int ) sqrt( Max );

    un b = 2,g;

    multOfPrime [ ind ] = 2;

    primes[ ind++ ] = 2;

    un y = pw( 2, b++ );

    perfectPower[ indx ] = y;

    multOfPPower[ indx++ ] = 2;

    //g = y;

    //cout<<y<<endl;

    while( y <= Max && y > 0 ){

        //perfectPower.push_back( make_pair( y, 2 ) );

        y  = pw( 2, b++ );

        if( y <= Max && y > 0  ){

            perfectPower[ indx ] =  y ;

            multOfPPower[ indx++ ] = 2;

            //cout<<y<<endl;

            //g = y;

        }

    }

    for( int i = 3; i <= sqrtMax; i += 2 ){

        if( !check( isprime[ i >> 5 ], i & 31 ) ){

            un c=2, x, z;

            x = pw( i, c++ );

            //if(i== 3251) cout<<x<<"     "<<c<<endl;

            if( x <= Max && x > 0 ){

                perfectPower[ indx ] = x;

                multOfPPower[ indx++ ] = i;

                z = x;

            }

            while( x <= Max && x > 0 ){

                //cout<<x<<endl;

                //perfectPower.push_back( make_pair( x, i ) );

                x  = pw( i, c++ );

                //cout<<x<<endl;
              // if(x==83883) cout<<i<<"     "<<c<<endl;

                if( z < x && x <= Max && x > 0 ){

                    perfectPower[ indx ] = x ;

                    multOfPPower[ indx++ ] = i;

                    z = x;

                }

            }

            multOfPrime [ ind ] = ( i * multOfPrime [ ind -1 ] ) & 4294967295;

            primes[ ind++ ] = i;

            for(  int j = i * i; j <= Max; j += ( i << 1 ) ) isprime[ j >> 5 ] = setBit( isprime[ j >> 5], j & 31);

        }

    }

    //sort( perfectPower.begin(), perfectPower.end(), sortinrev );

    for(int i = sqrtMax - 1; i <= Max; i += 2 ){

        if( !check( isprime[ i >> 5 ] , i & 31 ) ) {

         multOfPrime [ ind ] = ( i * multOfPrime[ ind - 1 ] ) & 4294967295;

         primes[ ind++ ] = i;

        }

    }

    Mysort();

    for(int i = 1; i < indx; i ++ )  multOfPPower[ i ] = ( ( multOfPPower[ i -1 ] * multOfPPower[ i ] ) & 4294967295 );

    //cout<<ind<<" "<<indx<<endl;
}
un findAns(int n){

    un productOfPrime,productOfPerfectPower, a;

    productOfPrime = upper_bound(primes, primes + ind, n) - primes;

    productOfPerfectPower = upper_bound( perfectPower, perfectPower + indx, n ) - perfectPower;

//    cout<<primes[ productOfPrime - 1 ]<<" "<<perfectPower[ productOfPerfectPower - 1 ]<<endl;
//
//    cout<<multOfPrime[ productOfPrime - 1 ]<<" "<<multOfPPower[ productOfPerfectPower - 1 ]<<endl;

    if( n >= 4)  a = ( multOfPrime[ productOfPrime - 1 ] * multOfPPower[ productOfPerfectPower - 1 ] ) & 4294967295;

    else a = multOfPrime[ productOfPrime - 1 ];

    return a & 4294967295;
}

void play(){

    int tc;

    while( cin>> tc ){

        int cas = 1, n;

        while( tc-- ){

            cin>> n;

            //findAns( n );

            cout<<"Case "<<cas++<<": "<< findAns( n ) << endl;

        }
    }
}

int main(){

//    ios_base::sync_with_stdio( false );
//
//    cin.tie( NULL );
//
//    cout.tie( NULL );

    sieve();

//    freopen( "in.txt", "r", stdin);
//
//    freopen( "out.txt", "w", stdout);

    play();

}
