#include<iostream>

int main(){
	int numero = 0;
	
	std::cout << "Digite um numero: ";
	std::cin >> numero;
	
	if(numero%2==0){
		std::cout << "O numero " << numero << " par";
	}else{
		std::cout << "O numero " << numero << " impar";
	}
}