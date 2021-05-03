#include<cstdio>

#include<iostream>

using namespace std;
int main() {
  char a[100], b[100];

  cout << "String 1:";
  gets(a);
  cout << endl << "String 2:";
  gets(b);

  int sum_a = 0, sum_b = 0;

  int i = 0;
  while (a[i] != '\0') {
    sum_a = sum_a + a[i];
    i++;
  } // sum of chars of both strings will be same
  i = 0;
  while (b[i] != '\0') {
    sum_b = sum_b + b[i];
    i++;
  }

  cout << endl << sum_a << " " << sum_b << endl;

  if (sum_a == sum_b) {
    cout << "Anagram";
  } else {
    cout << "Not Anagram";
  }
}