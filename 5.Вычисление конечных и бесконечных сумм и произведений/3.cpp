#include <iostream>
#include <cmath>
using namespace std;

int main()
{
     long int i = 0, f = 1; // i-ый член послкдовательности
                           // f - факториал
     long double e, s = 0, a = 3;  // e - заданная точность
                                  // s - сумма последовательности
                                 // a - перый член последовательности: (-3)^2*1/3*1! = 3
    cout << "e = "; cin >> e;
    while (a >= e) {
        i++;
        f *= i;
        a = pow(-3, 2 * i) / (3 * f);
        s += a;
        cout << a << "\t\t\t" << s << endl;
    }
}
