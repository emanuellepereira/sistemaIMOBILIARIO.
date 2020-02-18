#include "Imovel.h"

#include <iostream>
#include <string>

using namespace std;

Imovel::Imovel(){};

Imovel::Imovel(int tipoImovel){
    ///????????????????
};

void Imovel::setTipoImovel(int tipoImovel) {
	this -> tipoImovel = tipoImovel;
};

void Imovel::setTipoOferta(int tipoOferta) {
	this -> tipoOferta = tipoOferta;
};

void Imovel::setTituloAnuncio(string tituloAnuncio) {
	this -> tituloAnuncio = tituloAnuncio;
};

void Imovel::setPreco(double preco) {
    this -> preco = preco;
}

int Imovel::getTipoImovel() {
	return tipoImovel;
}

int Imovel::getTipoOferta() {
	return tipoOferta;
}

string Imovel::getTituloAnuncio() {
	return tituloAnuncio;
}

double Imovel::getPreco() {
	return preco;
}

Endereco Imovel::getEndereco() {
	return endereco;
}

/*void Imovel::toStringImovel() { ///imprime
	switch (tipoImovel) {
	case 1:
		cout << "Casa ";
		break;
	case 2:
		cout << "Apartamento ";
		break;

	case 3:
		cout << "Terreno ";
		break;

	default:
		break;
	}

	switch (tipoOferta)
	{
	case 1:
		cout << "a venda" << endl;
		break;

	case 2:
		cout << "para alugar" << endl;
		break;
	default:
		break;
	}
	cout << "Preco: $" << preco << endl;
*/
};
