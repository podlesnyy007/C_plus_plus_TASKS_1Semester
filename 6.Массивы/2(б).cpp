/*
Дана последовательность целых чисел. Посчитать среднее арифметическое отрицательных элементов. Использовать двумерный динамический массив.
*/

/*
Ввод с клавиатуры:
3 3
-1 3 2
0 -5 -7
10 -2 5
Ответ: -3.75
*/

#include <iostream>
using namespace std;

int **f(int& n, int& m) { // Функция создает и заполняет двумерный масссив
    cout << "n = "; cin >> n;
    cout << "m = "; cin >> m;
    int **mas = new int* [n]; //Объявили двумерный динамический массив
    for (int i = 0; i < n; i++)
        mas[i] = new int[m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> mas[i][j];
        }
    }
    return mas;
}

int main()
{
    int n, m, k = 0; // k - количество отрицательный чисел
    float s = 0; // s - сумма отрицательных чисел
    int** a = f(n, m);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] < 0) {
                s += a[i][j];
                k++;
            }
        }
    }
    if (k != 0)
        cout << s / k;
    else
        cout << "Отрицательный чисел в последовательности нет";
    for (int i = 0; i < n; i++) // Освобождаем память, выделенную под i-ою строку массива
        delete[] a[i]; 
    delete[] a;// Освобождаем память, выделенную под массив указателей
    return 0;
}
