#include <bits/stdc++.h>

using namespace std;

int main( void )
{
  int K, S;
  cin >> K >> S;

  int count = 0;

  for( int x = 0; x <= K; x++ ) {
    for( int y = 0; y <= K; y++ ) {
      int ans = S - ( x + y );
      if( ans >= 0 && ans <= K )
	  count++;
    }
  }

  cout << count << endl;
}
