#include <bits/stdc++.h>

using namespace std;

int main( void )
{
  int N, X, num;
  cin >> N >> X;

  vector<int> A;
  for( int i = 0; i < N; i++ ) {
    cin >> num;
    if( num != X )
      A.push_back( num );
  }

  for( int i = 0; i < A.size(); i++ ) {
    cout << A[ i ];
    if( i != A.size() )
      cout << " ";
    else
      cout << endl;
  }
}
  
