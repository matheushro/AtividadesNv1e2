#include<iostream>

int main(){
	float distancia = 0;
	float tempo = 0;
	int velocidade = 0;
	int combustivel = 12;
	float litros = 0;
	std::cout << "Digite o tempo da viagem em horas: ";
	std::cin >> tempo;
	std::cout << "Digite a velocidade media do automovel em KM/H: ";
	std::cin >> velocidade;
	distancia = tempo * velocidade;
	litros = distancia / combustivel;	
	
	std::cout << "Velocidade media: " << velocidade << "\nTempo gasto: " << tempo << "\nDistancia percorrida: " << distancia << "\nCombustivel utilizado: " << litros << " litros";
	
	return 0;
}