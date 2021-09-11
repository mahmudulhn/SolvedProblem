#include<bits/stdc++.h>

using namespace std;

void play(){

    //freopen("in.txt","r",stdin);

    //freopen("out.txt","w",stdout);

    int tc, k = 1;

    cin >> tc;

    while( tc --){


        int n, p, q, x, count_ = 0, sum = 0;

        cin >> n >> p >> q;

        bool f = false;

        //vector< int >v;

        while( n-- ){

            cin >> x;



            if( sum+x <= q && count_+ 1 <= p ) {

                sum += x;

                count_++;

                //f = 1;

                //cout << sum <<count_<<endl;

            }

            //v.push_back( x );

        }

        cout << "Case "<< k <<": "<< count_ <<endl;

        k++;
    }

}

int main(){

    ios_base::sync_with_stdio( false );

    cin.tie( NULL );

    cout.tie( NULL );

    play();


}
