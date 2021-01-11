#include <iostream>
using namespace std;
int factorial(int a)
{
    if (a == 1)
        return 1;
    else
    {
        return a * factorial(a - 1);
    }
}
int main()
{
    int a;
    cout << "Number=" << endl;
    cin >> a;
    cout << "Factorial=" << factorial(a) << endl;
    return 0;
}
