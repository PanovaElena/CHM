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
	cout << "Задайте параметр контроля для решения СЛАУ методом Зейделя: " << endl;
	cout << "eps=0.0000005";
	//cin >> eps;

	Reference ref(0.0000005);

	ref.Compute();

	ref.Show('y');

	cin.get();

    return 0;
}

