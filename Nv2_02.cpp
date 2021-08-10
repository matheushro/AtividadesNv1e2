#include<iostream>
 
 int main (){
	int Celsius = 0;
	int Fahrenheit = 0;
	std::cout << "Digite a temperatura em graus Celsius: ";
	std::cin >> Celsius;
	Fahrenheit = 9 * Celsius + 160;
	Fahrenheit = Fahrenheit / 5; 
	std::cout << "A temperatura em graus Fahrenheit e de " << Fahrenheit;
	return 0;
 }