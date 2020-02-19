#include "Endereco.h"
#include "Imovel.h"

#include <iostream>
#include <string>

using namespace std;

Endereco::Endereco() {};

Endereco::Endereco(int numero, string rua, string bairro, string cep, string cidade){
    this -> numero = numero;
    this -> rua = rua;
    this -> bairro = bairro;
    this -> cep = cep;
    this -> cidade = cidade;
}

void Endereco::setEndereco() {
	cout << "Digite o nome da rua: " << endl; cin >> rua;
	cout << "Digite o numero do imovel: " << endl; cin >> numero;
	cout << "Digite o nome do bairro: " << endl; cin >> bairro;
	cout << "Digite o CEP do local: " << endl;  cin >> cep;
	cout << "Digite o nome da cidade: " << endl; cin >> Cidade;
}

void Endereco::setNumero(int numero) {
	this -> numero = numero;
}

void Endereco::setRua(string rua) {
	this -> rua = rua;
}

void Endereco::setBairro(string bairro) {
	this -> bairro = bairro;
}

void Endereco::setCep(string cep) {
	this -> cep = cep;
}

void Endereco::setCidade(string cidade) {
	this -> cidade = cidade;
}

int Endereco::getNumero() {
	return numero;
}

string Endereco::getRua() {
	return rua;
}

string Endereco::getBairro() {
	return bairro;
}

string Endereco::getCep() {
	return cep;
}

string Endereco::getCidade() {
	return Cidade;
}

void Endereco::toStringEndereco() {
	cout << "Endereco: " << rua << ", " << numero << ", " << bairro << "; " << cep << "; " << Cidade << endl;
}

