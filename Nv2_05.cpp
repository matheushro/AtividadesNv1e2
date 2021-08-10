#include<iostream>
 
 int main (){
	int Celsius = 0;
	int Fahrenheit = 0;
	float Kelvin = 0;
	std::cout << "Digite a temperatura em graus Fahrenheit: ";
	std::cin >> Fahrenheit;
	Celsius = Fahrenheit - 32;
	Celsius = Celsius * 5; 
	Celsius = Celsius / 9;
	Kelvin = Celsius + 273.15;
	std::cout << "A temperatura em graus Celsius e de " << Kelvin;
	return 0;
 }