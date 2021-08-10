#include<iostream>

int main (){
	int numero = 0;
	
	std::cout << "Digite um numero: ";
	std::cin >> numero;
	
	if(numero > 20){
		std::cout << "O numero " << numero << " e maior que 20";
	}
	else{
		std::cout << "O numero " << numero << " e menor que 20";
	}
	
}