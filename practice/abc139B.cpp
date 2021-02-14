#include <bits/stdc++.h>

using namespace std;

int main( void )
{
  int A, B;
  cin >> A >> B;

  int num = 1;
  int count = 0;

  while( num < B ) {
    num--;
    num += A;
    count++;
  }

  cout << count << endl;
}
