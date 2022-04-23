#include <iostream>

using namespace std;

int main()
{
	/* Программа, которая  предлагает пользователю ввести радиус окружности,
	а затем считает площадь и длину этой окружности. */

	setlocale(0, "rus");

	//Variable initialization
	const float pi = 3.14;

	float square, lenght, radius;
	// Info
	cout << "Пожалуйста, введите радиус окружности и я посчитаю её площадь и длину.\n";
	// Input
	cout << "Радиус: ";
	cin >> radius;
	// Calculate
	square = pi * pow(radius, 2);
	lenght = 2 * pi * radius;
	// Output
	cout << "Площадь окружности: " << square << "\n";
	cout << "Длина окружности: " << lenght << "\n";
}