#include <bits/stdc++.h>

using namespace std;

int main( void )
{
  int V, T, S, D;
  bool hit = true;
  
  cin >> V >> T >> S >> D;

  double time = ( double )D / V;
  if( time >= ( double )T && time <= ( double )S )
    hit = false;

  if( hit )
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}
