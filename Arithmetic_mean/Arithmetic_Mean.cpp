#include <iostream>

using namespace std;

int main()
{
	// Программа, которая считает среднее арифметическое 3х чисел.

	setlocale(0, "rus");

	//Variable initialization
	float num1, num2, num3, mean;
	// Info
	cout << "Пожалуйста, введите 3 числа и я посчитаю их среднее арифметическое.\n";
	// Input
	cout << "Число 1: ";
	cin >> num1;
	cout << "Число 2: ";
	cin >> num2;
	cout << "Число 3: ";
	cin >> num3;
	// Calculate
	mean = (num1 + num2 + num3) / 3;
	// Output
	cout << "Среднее арифметическое: " << mean << "\n";
}