#include<iostream>

int main(){
	int numero1 = 0;
	int numero2 = 0;
	int soma = 0;
	
	std::cout << "Digite o primeiro numero: ";
	std::cin >> numero1;
	std::cout << "Digite o segundo numero: ";
	std::cin >> numero2;
	
	soma = numero1 + numero2;
	if(soma > 20){
		std::cout << "A soma dos numeros +8 e: " << soma+8;
	}
	else{
		std::cout << "A soma dos numeros -5 e: " << soma-5;
	}
}