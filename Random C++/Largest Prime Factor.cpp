#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>

using namespace std;

int main()
{
  int n;

  cin >> n;
  int m = n;
  cout << 1 << " ";
  int self_prime = 0;
  if (n % 2 == 0)
  {
    cout << 2;
    goto e;
  }

  for (int i = 3; i <= n / 2; i = i + 2)
  {
    while (n % i == 0)
    {

      cout << i << " ";
      self_prime = 1;
      n = n / i;
    }
  }

  if (self_prime == 0)
  {
    cout << m;
  }
e:
  return 0;
}
