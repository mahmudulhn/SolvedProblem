#include<bits/stdc++.h>
#define E 1e-7

using namespace std;



void play(){

    int tc;

    while( cin >> tc ){

        for(int i = 1; i <= tc; i++){



            double l, n, c;

            cin >> l >> n >> c;

            double l_prime = ((1 + n * c) * l);

            //cout << l_prime <<endl;

            double a =  l / 2.0;

            double r, s, theta;

            double low = 0.0, high = l / 2.0, mid = 0.0;

            while( high  - low > E){


                mid = (low + high ) / 2;

                //cout <<mid<<endl;

                r = ( mid / 2.0 ) + ( ( l * l) / ( 8.0 * mid) );

                theta = 2.0 * ( asin( a / r));

                s = r * theta;

                if( s >= l_prime)   high = mid;

                else low = mid;

            }

            cout << "Case " << i << ": " << setprecision(7) << fixed << low << endl;;







        }

    }

}

int main(){

    /*ios_base::sync_with_stdio( false );

    cin.tie( NULL );

    cout.tie( NULL );*/

    play();

}

