#include <iostream>

int main (){
	int Celsius;
	float Kelvin;
	std::cout << "Digite a temperatura em graus Celsius: ";
	std::cin >> Celsius;
	Kelvin = Celsius + 273.15;
	std::cout << "A temperatura em graus Kelvin e de " << Kelvin;
	return 0;
}