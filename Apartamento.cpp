#include "Apartamento.h"
#include "Endereco.h"
#include "Imovel.h"

#include <iostream>
#include <string>

Apartamento::Apartamento() {
	setTipoImovel(2); // Ver Imovel.h para ver especificações do parâmetro
};

Apartamento::Apartamento(int numeroQuartos,  int numeroVagas, double area, double valorCondominio, string posicao){
    this -> numeroQuartos = numeroQuartos;
    this -> numeroVagas = numeroVagas;
    this -> area = area;
    this -> valorCondominio = valorCondominio;
    this -> posicao = posicao;
}

void Apartamento::setApartamento() {
	cout << "Digite o numero de quartos: "; cin >> numeroQuartos;
	cout << "Digite o numero de vagas na garagem: "; cin >> numeroVagas;
	cout << "Digite a area do apartamento: "; cin >> area;
	cout << "Digite o valor do condominio: "; cin >> valorCondominio;
	cout << "Digite a posicao do apartamento com relacao ao sol: " << endl; cin >> posicao;
}

void Apartamento::setnumQuartos(int numeroQuartos) {
	this -> numeroQuartos = numeroQuartos;
}

void Apartamento::setnumVagas(int numeroVagas) {
	this -> numeroVagas = numeroVagas;
}

void Apartamento::setArea(double area) {
	this -> area = area;
}

void Apartamento::setValorCondominio(double valorCondominio) {
	this -> valorCondominio = valorCondominio;
}

void Apartamento::setPosicao(string posicao) {
	this -> posicao = posicao;
}

int Apartamento::getnumQuartos() {
	return numeroQuartos;
}

int Apartamento::getnumVagas() {
	return numeroVagas;
}

double Apartamento::getArea() {
	return area;
}

double Apartamento::getValorCondominio() {
	return valorCondominio;
}

string Apartamento::getPosicao() {
	return posicao;
}

/*void Apartamento::toStringApartamento() {
	toStringImovel();
	cout << "Numero de quartos: " << numeroQuartos << endl;
	cout << "Numero de vagas na garagem: " << numeroVagas << endl;
	cout << "Area: " << area << endl;
	cout << "Valor do Condominio: " << valorCondominio << endl;
	cout << "Posicao em relacao ao sol: " << posicao << endl;
	toStringEndereco();
}*/

void Apartamento::ExibirApartamento(){
    string categoria;
    if(tipoOferta==1){
        categoria = "A venda";
    }else if(tipoOferta==2){
        categoria = "Para alugar";
    }

    cout << "Titulo: " << tituloAnuncio << endl;
    cout << "Categoria: " << categoria << endl;
    cout << "Endereco: " << toStringEndereco() << endl;
    cout << "Preco: " << preco << endl;
    cout << "Valor do Condominio: " << valorCondominio << endl;
    cout << "Area: " << area << "m²" << endl;
    cout << "Numero de quartos: " << numeroQuartos << endl;
    cout << "Numero de vagas na garagem: " << numeroVagas << endl;
    cout << "Posicao: " << posicao << endl;
}

void Apartamento::EditarApartamento(){

     int opcao1, x=0;

        cout << "O que voce deseja mudar: " << endl;
        cout << "1.Titulo" << endl;
        cout << "2.Categoria" << endl;
        cout << "3.Endereco" << endl;
        cout << "4.Preco" << endl;
        cout << "5.Valor do Condominio: " << endl;
        cout << "6.Area" << endl;
        cout << "7.Numero de quartos" << endl;
        cout << "8.Numero de vagas na varagem" << endl;
        cout << "9.Posicao" << endl;
        cin >> opcao1;

        if(opcao1==1){
            string tituloAnuncio;
            cout << "Novo titulo: " << endl;
            cin.ignore();
            getline(cin,titulo);
            this -> tituloAnuncio = tituloAnuncio;
            x=1;
        }else if(opcao1==2){
            int tipoOferta;
            cout << "Categoria do imovel: " << endl;
            cout << "1. Vender" << endl;
            cout << "2. Alugar" << endl;
            cin >> tipoOferta;
            this -> tipoOferta = tipoOferta;
            x=1;
        }else if(opcao1==3){
            int opcao2;

            cout << "O que voce quer mudar do endereco: " << endl;
            cout << "1. Numero" << endl;
            cout << "2. Rua" << endl;
            cout << "3. Bairro" << endl;
            cout << "4. CEP" << endl;
            cout << "5. Cidade" << endl;
            cin >> opcao2;
            if(opcao2==1){
                int numero;
                cout << "Novo titulo: " << endl;
                cin >> numero;
                this -> Endereco.setNumero(numero);
                x=1;
            }else if(opcao2==2){
                string rua;
                cout << "Nome da rua: " << endl;
                cin.ignore();
                getline(cin, rua);
                this -> Endereco.setRua(rua);
                x=1;
            }else if(opcao2==3){
                string bairro;
                cout << "Nome do bairro: " << endl;
                cin.ignore();
                getline(cin, bairro);
                this -> Endereco.setBairro(bairro);
                x=1;
            }else if(opcao2==4){
                int cep;
                cout << "CEP: " << endl;
                cin >> cep;
                this -> Endereco.setCep(cep);
                x=1;
            }else if(opcao2==5){
                string cidade;
                cout << "Nome da Cidade: " << endl;
                cin.ignore();
                getline(cin, cidade);
                this -> Endereco.setCidade(cidade);
                x=1;
            }
        }else if(opcao1==4){
            double preco;
            cout << "Novo preco: " << endl;
            cin >> preco;
            this -> preco = preco;
            x=1;
        }else if(opcao1==5){
            int valorCondominio;
            cout << "Valor do Condominio: " << endl;
            cin >> valorCondominio;
            this -> valorCondominio = valorCondominio;
            x=1;
        }else if(opcao1==6){
            int area;
            cout << "Nova Area: " << endl;
            cin >> area;
            this -> area = area;
            x=1;
        }else if(opcao1==7){
            int numeroQuartos;
            cout << "Numero de quartos: " << endl;
            cin >> numeroQuartos;
            this -> numeroQuartos = numeroQuartos;
            x=1;
        }else if(opcao1==8){
            int numeroVagas;
            cout << "Numero de vagas na garagem: " << endl;
            cin >> numeroVagas;
            this -> numeroVagas= numeroVagas;
            x=1;
        }else if(opcao1==8){
            string posicao;
            cout << "Posicao em relacao ao sol: " << endl;
            cin.ignore();
            getline(cin, posicao);
            this -> posicao = posicao;
            x=1;
        }else{
            cout << "Opcao invalida" << endl;
            x=0;
        }

        if(x==1){
            cout << "Imovel alterado com sucesso!" << endl;
        }else if(x==0){
            cout << "Imovel nao alterado!" << endl;
        }
}
