#include <bits/stdc++.h>

using namespace std;

int main( void )
{
  int N;
  cin >> N;

  vector<int> X( N );

  int sum = 0;

  for( int i = 0; i < N; i++ ) {
    cin >> X[ i ];
    sum += X[ i ];
  }

  int ave = sum / N;

  int ans1 = 0;
  int ans2 = 0;
  
  for( int i = 0; i < N; i++ ) {
    ans1 += pow( ave - X[ i ], 2 );
    ans2 += pow( ave + 1 - X[ i ], 2 );
  }
  
  if( ans1 > ans2 )
    cout << ans2 << endl;
  else
    cout << ans1 << endl;
}
