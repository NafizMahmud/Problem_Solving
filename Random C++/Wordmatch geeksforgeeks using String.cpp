#include<iostream>

#include<cstdio>

#include<cstring>

using namespace std;

int main() {
  char sentence[] = "I rafi am am am rafi";
  string words[50];
  //gets(sentence);
  int word_count = 0;

  int j = 0, k = 0;
  while (j <= strlen(sentence)) {

    if (sentence[j] == ' ' || sentence[j] == '\0') {

      char word[100] = "";
      int i = 0;
      while (k < j) {
        word[i] = sentence[k];
        i++;
        k++;
      }
      word[i] = '\0';
      k = j + 1;

      words[word_count] = word;

      word_count++;
    }
    j++;
  }

  cout << "Matched words" << endl;
  for (int i = 0; i < word_count; i++) {

    for (int j = i + 1; j < word_count; j++) {

      if (words[i] == words[j]) {
        words[j] = ".";
      }
    }
  }

  for (int i = 0; i < word_count && words[i] != "."; i++) {
    cout << words[i] << " ";
  }

}