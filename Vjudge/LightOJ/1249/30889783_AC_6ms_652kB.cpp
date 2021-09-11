#include<bits/stdc++.h>

using namespace std;

long long fact[ 21 ];


void play(){



    //freopen("in.txt","r",stdin);

    //freopen("out.txt","w",stdout);

    int tc, k = 1;

    cin >> tc;

    while( tc --){


        int n, m;

        cin >> n;

        m = n;

        int x, y, z, mx = -1, mn = 1000000;

        string name, ans1, ans2 = "";

        set<int>s;

        while( n-- ){

            cin >> name >> x >> y >> z;

            if( x * y * z > mx ){

                mx = x * y * z ;

                ans1 = name;

            }

            if( x * y * z < mn ){

                mn = x * y * z ;

                ans2 = name;

            }

            s.insert(x * y * z);




        }

        if(s.size() == 2 ){

            if(s.size() != m)cout << "Case "<< k <<": "<< ans1 << " took chocolate from all" << endl;

            else    cout << "Case "<< k <<": "<< ans1 << " took chocolate from " << ans2 << endl;

        }

        else  if(s.size() == 3)   cout << "Case "<< k <<": "<< ans1 << " took chocolate from " << ans2 << endl;

        else cout << "Case "<< k <<": "<< "no thief" << endl;

        k++;
    }

}

int main(){

    ios_base::sync_with_stdio( false );

    cin.tie( NULL );

    cout.tie( NULL );

    play();


}


