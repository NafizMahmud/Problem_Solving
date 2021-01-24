#include<iostream>

using namespace std;

int main() {
  int n;
  cin >> n;

  while (n > 0) {
    char a[1000];
    cin.getline(a, 800);

    int sum_a = 0, sum_b = 0;

    int i = 0;
    while (a[i] != ' ') {
      sum_a = sum_a + a[i];
      i++;
    }
    int j = i + 1;
    while (a[j] != '\0') {
      sum_b = sum_b + a[j];
      j++;
    }

    cout << endl << sum_a << " " << sum_b << endl;

    if (sum_a == sum_b) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }

    n--;
  }

  return 0;
}