#include<bits/stdc++.h>

#define E 10e-15

using namespace std;




void play(){


//
//    freopen("in.txt","r",stdin);
//
//    freopen("out.txt","w",stdout);

    int tc;

    while( cin >> tc){

        double pre = 0, nw = 1;

        for( int i = 1; i <= tc; i++ ){

            double ax, ay, bx, by, cx, cy, dx, dy;



            cin >> ax >> ay >> bx >> by >> cx >> cy >> dx >> dy;

            double axl, ayl, axr, ayr, bxl, byl, bxr, byr, d1, d2;

            pre = 0;

            nw = 1;

            while( abs(pre - nw) > E){

                axl = ( 2 * ax + bx ) / 3.0;

                ayl = ( 2 * ay + by ) / 3.0;

                axr = ( 2 * bx + ax ) / 3.0;

                ayr = ( 2 * by + ay ) / 3.0;

                bxl = ( 2 * cx + dx ) / 3.0;

                byl = ( 2 * cy + dy ) / 3.0;

                bxr = ( 2 * dx + cx ) / 3.0;

                byr = ( 2 * dy + cy ) / 3.0;

                d1 = sqrt( ( (axl - bxl) * (axl - bxl) ) + ( (ayl - byl) * (ayl - byl) ) );


                d2 = sqrt( ( (axr - bxr) * (axr - bxr) ) + ( (ayr - byr) * (ayr - byr) ) );

                //cout <<d1 <<" "<<d2<<endl;

                if( d1 < d2){

                    pre = nw;

                    nw = d1;

                    bx = axr;

                    by = ayr;

                    dx = bxr;

                    dy = byr;

                }

                else{

                    pre = nw;

                    nw = d2;

                    ax = axl;

                    ay = ayl;

                    cx = bxl;

                    cy = byl;

                }

            }

            cout <<setprecision( 6 )<<fixed;

            if( nw <= 0)   cout << "Case " << i << ": " <<0<<endl;

            else    cout << "Case " << i << ": " <<nw<<endl;

        }

    }

}

int main(){

    //ios_base::sync_with_stdio( false );

    //cin.tie( NULL );

    //cout.tie( NULL );

    play();


}
