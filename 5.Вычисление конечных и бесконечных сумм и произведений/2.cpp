#include <iostream>
using namespace std;

int main() 
{
    int k; // до какого числа
    double x, f = 1, h = 1;  // f - факториал, h - произведение
    cin >> k >> x;
    for (int i = 1; i <= k; i++) {
        f *= i;
        h *= 1 + ((pow((-1), i + 1) * pow(x, i)) / f);
    }
    cout << h;
}
