#include "Computing.h"
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	int m, n;
	double eps;
	char f;
	cout << "РЕШЕНИЕ ЗАДАЧИ ДИРИХЛЕ ДЛЯ УРАВНЕНИЯ ПУАССОНА" << endl;
	cout << "Задайте размерность сетки: " << endl;
	cout << "n=";
	cin >> n;
	cout << "m=";
	cin >> m;
	cout << "Задайте параметр контроля для решения СЛАУ методом Зейделя: " << endl;
	cout << "eps=";
	cin >> eps;
	cout << "Выводить ли решение на экран (y/n)?";
	cin >> f;

	Reference ref(n,m,eps);

	ref.Compute();

	ref.Show(f);

	cin.get();

    return 0;
}

