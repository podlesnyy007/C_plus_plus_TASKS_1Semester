/*
Вставить новый элемент перед всеми элементами, в записи которых есть данная цифра
*/

/*
n = 9
k = 5
12 45 65 89 4 55 100 1005 151
Ответ: 12 5 45 5 65 89 4 5 55 100 5 1005 5 151
*/

#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cout << "n = "; cin >> n; //n - количество элементов в массиве
    cout << "k = "; cin >> k; //k - элемент, который нужно вставить
    int m = 2 * n;
    int* a = new int[m];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = n - 1; i >= 0; i--) { //переставляем элементы в массиве с конца
        int h = a[i];
        while (h > 0) {
            if (h % 10 == k) { //ищем число k в элементе массива
                for (int j = n; j > i; j--)
                    a[j] = a[j - 1];
                a[i] = k;
                n++; //увеличиваем размер массива
                break;
            }
            h /= 10;
        }
    }
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}
