#include <bits/stdc++.h>
using namespace std;

int main()
{
  char a[100], unique_character[100];
  gets(a);
  int len_a = strlen(a);

  int i = 0, unique_character_count = 0, unique_character_counter_array[100];

  while (i < len_a)
  {
    int j = i + 1;

    if (a[i] == '.' || a[i] == ',' || a[i] == ' ')
    {
      i++;
      continue;
    }

    else
    {

      unique_character[unique_character_count] = a[i];
      unique_character_counter_array[unique_character_count] = 1;

      while (j < len_a)
      {

        if (a[j] == a[i])
        {
          unique_character_counter_array[unique_character_count]++;
          a[j] = '.';
        }
        j++;
      }
      i++;
      unique_character_count++;
    }
  }
  cout << "Only Unique Characters = " << endl;

  int z = 0;
  while (z < unique_character_count)
  {
    cout << unique_character[z] << " " << unique_character_counter_array[z] << endl;
    z++;
  }

  cout << "which charcter u wanna find";
  char c;
  cin >> c;
  int s = strlen(unique_character);
  int x = 0;
  while (x < s)
  {
    if (unique_character[x] == c)
    {
      cout << unique_character_counter_array[x];
    }

    x++;
  }

  return 0;
}
