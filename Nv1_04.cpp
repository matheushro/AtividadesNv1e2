#include<iostream>

int main (){
	int numero = 0;
	
	std::cout << "Digite um numero: ";
	std::cin >> numero;
	
	if (numero == 0){
		std::cout << "O numero " << numero << " e nulo";
	}
	else if(numero > 0){
		std::cout << "O numero " << numero << " e positivo";
	}
	else if(numero < 0){
		std::cout << "O numero " << numero << " e negativo";
	}
	
}