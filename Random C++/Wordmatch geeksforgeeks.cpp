#include<iostream>

#include<stdio.h>

#include<string.h>

using namespace std;

char words[50][50]; //ata holo 50 length er 50 ta string...same as multidimensional array...
char a[100];
int check = 0;

int duplicate_check(char w[], int i) {

  int current_sum = 0, j = 0;

  while (w[j] != '\0') {
    current_sum = current_sum + w[j];
    j++;
  }

  int m = 0;
  int n = 0;
  while (m < i) {

    n = 0;
    int prev_sum = 0;
    while (words[m][n] != '\0') {
      prev_sum = prev_sum + words[m][n];
      n++;
    }

    //cout<<w<<" "<<current_sum<<"  "<<words[m]<<" "<< prev_sum;
    if (current_sum - prev_sum == 0) {
      check = 1;
      break;
    } //cout<<"Duplicate"; cout<<endl;

    m++;
  }

  return check;

}
int main() {
  gets(a);

  int word_cnt = 0;

  int k = 0;
  int chk = 0;

  int i = 0;
  while (i < 50) {

    int j = 0;
    while (a[k] != ' ') {

      words[i][j] = a[k];
      j++;
      if (a[k] == '\0') {
        break;
      }
      k++;
    }

    words[i][j] = '\0';

    if (i > 0) {
      chk = duplicate_check(words[i], i);
    }

    cout << chk << endl;
    if (chk == 1) {
      word_cnt = word_cnt;
      i = i;
    } else if (chk == 0) {
      word_cnt++;
      i++;
    }

    if (a[k] == '\0') {
      break;
    }

    k++;

  }

  cout << word_cnt << endl;

  for (int i = 0; i < word_cnt; i++) {
    cout << "word " << i + 1 << " " << words[i] << endl;
  }

}
