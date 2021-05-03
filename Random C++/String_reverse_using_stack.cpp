#include <iostream>

#include <cstdio>

#include <cstring>

using namespace std;

char stk[100]; //char stack declare korsi. global hisebe declare kora hoise jate push r pop function e pass na korte hoi.
int max_stack = 99; //
int top = 0; // top initialize

void push(char val) {

  if (top == max_stack) {
    cout << "Stack Overflow" << endl;
  } // stack r jaiga nai
  else {
    top++;
    stk[top] = val;
  }
} // top  e value bosai ..top++

void pop() {

  if (top == -1) {
    cout << "Stack Underflow ";
  } // stack e remove korar moto keu nai.
  else {
    cout << stk[top];
    top--;
  }
} // cout korsi reverse korar jnno.top komai dilei pop.

int main() {

  char a[20];
  gets(a);

  int i = 0;
  while (i < strlen(a)) {
    push(a[i]);
    i++;
  } //char array niye 1st e sbaik char stack e push korsi
  i = 0;
  while (i <= strlen(a)) {
    pop();
    i++;
  } // erpor sbaik pop korar time print kore dilei reverse string paye jabo.

}