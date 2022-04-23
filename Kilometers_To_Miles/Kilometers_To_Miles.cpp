#include <iostream>

using namespace std;

int main()
{
    // Программа, которая переводит километры в сухопутные и морские мили. 

	setlocale(0, "rus");

	//Variable initialization
	float kilometers, statuteMiles, nauticalMiles; // километры, сухопутные мили, морские мили
	// Info
	cout << "Пожалуйста введите километры и я переведу их в сухопутные и морские мили.\n";
	// Input
	cout << "Километры: ";
	cin >> kilometers;
	// Calculate
	statuteMiles = kilometers * 0.621371;
	nauticalMiles = kilometers * 0.539957;
	// Output
	cout << "Сухопутные мили: " << statuteMiles << "\n";
	cout << "Морские мили: " << nauticalMiles << "\n";
}