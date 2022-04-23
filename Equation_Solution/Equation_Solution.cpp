#include <iostream>

using namespace std;

int main()
{
	// Программа которая решает уравнение линейного типа: ax + b = c

	setlocale(0, "rus");

	//Variable initialization
	float a, b, c, x;
	// Info
	cout << "Пожалуйста введите числа a, b, c и я найду x.\n";
	cout << "Вид уравнения: ax + b = c\n";
	// Input
	cout << "Введите число a: ";
	cin >> a;
	cout << "Введите число b: ";
	cin >> b;
	cout << "Введите число c: ";
	cin >> c;
	// Calculate
	x = (c - b) / a;
	// Output
	cout << "x = " << x << "\n";
}