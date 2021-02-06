#include <bits/stdc++.h>

using namespace std;

int main( void )
{
  int N;
  cin >> N;
  
  vector<int> x( N ), y( N );

  for( int i = 0; i < N; i++ )
    cin >> x[ i ] >> y[ i ];

  int max = 0;

  for( int i = 0; i < N - 1; i++ ) {
    for( int j = i + 1; j < N; j++ ) {
      if( max < pow( x[ i ] - x[ j ], 2 ) + pow( y[ i ] - y[ j ], 2 ) )
	max =  pow( x[ i ] - x[ j ], 2 ) + pow( y[ i ] - y[ j ], 2 );
    }
  }

  cout << ( double )sqrt( max ) << endl;
}
