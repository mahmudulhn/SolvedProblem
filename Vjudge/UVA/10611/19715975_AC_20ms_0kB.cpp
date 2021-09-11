#include<bits/stdc++.h>
#define Max 50000
using namespace std;

int a[ Max+2 ];

int low, high, ind ;

int up_b( int n )
{
    ind = - 1 ;
    while( low <= high )
    {

        int mid = ( low + high ) / 2 ;

        if(n == a [ mid ] )
        {
            ind = mid ;
            low = mid + 1 ;
        }

        else if( a[ mid ] < n )
            low = mid + 1;

        else if( a[ mid ] > n )
            high = mid - 1;
    }

    if( ind == -1 )
        return high+1;

    else
        return high;
}

int low_b( int n )
{
    int ind = - 1 ;
    while( low <= high )
    {

        int mid = ( low + high ) / 2 ;

        if(n == a [ mid ] )
        {
            ind = mid ;
            high = mid - 1 ;
        }

        else if( a[ mid ] < n )
            low = mid + 1;

        else if( a[ mid ] > n )
            high = mid - 1;
    }
    if( ind == -1 )
        return low-1;

    else
        return low;
}

void solve()
{
    int n;

    while( cin >> n )
    {
        low = 0;

        high = n-1 ;

        for(int i = 0; i < n; ++i )
            cin >> a[i];

        int q, x;

        cin >> q;

        while( q-- )
        {
            low = 0;

            high = n-1;

            cin >> x;

            if( low_b( x ) < 0 || a[ low_b( x ) ] == 0)
                cout << "X " ;

            else
                cout << a[ low_b( x ) ] << " " ;

            low = 0;

            high = n-1;

            if( up_b( x ) >= n || a [ up_b( x ) ] == 0 )
                cout << "X" << endl;
            else
                cout << a [ up_b( x ) ] << endl ;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio( false );

    cin.tie( NULL );

    cout.tie( NULL );

    solve();
}

