#include<iostream>
 
 int main (){
	int Celsius = 0;
	int Fahrenheit = 0;
	std::cout << "Digite a temperatura em graus Fahrenheit: ";
	std::cin >> Fahrenheit;
	Celsius = Fahrenheit - 32;
	Celsius = Celsius * 5; 
	Celsius = Celsius / 9;
	std::cout << "A temperatura em graus Celsius e de " << Celsius;
	return 0;
 }