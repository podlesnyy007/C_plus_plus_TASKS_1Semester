/*
Переписать в новый файл все строки, вставив в конец каждой строки ее номер.
*/

/*
Я сразу смазал карту будня,
плеснувши краску из стакана;
я показал на блюде студня
косые скулы океана.
На чешуе жестяной рыбы
прочел я зовы новых губ.
А вы
ноктюрн сыграть
могли бы
на флейте водосточных труб?
*/

#include<iostream>
#include<string>
#include <fstream> //класс двунаправленных (входных и выходных) файловых потоков 
using namespace std;

int main() 
{
	ifstream in("f.txt"); //открываем входной поток in и связываем его с файлом f.txt
	ofstream out("g.txt"); 
	string str;
	int i = 1;
	while (getline(in, str)) //считываем значение из потока in в переменную str построчно
		out << str << " " << i++ << endl; //помещаем значение переменной str в поток out
	in.close();
	out.close();
	return 0;
}
