#include "Casa.h"
#include "Endereco.h"
#include "Imovel.h"

#include <iostream>
#include <string>

using namespace std;

Casa::Casa() {
	setTipoImovel(1);
};

void Casa::setCasa() {
	cout << "Digite o numero de pavimentos: "; cin >> numeroPavimentos;
	cout << "Digite o numero de quartos: "; cin >> numeroQuartos;
	cout << "Digite a area do terreno: "; cin >> areaTerreno;
	cout << "Digite a area construida: "; cin >> areaConstruida;
}

void Casa::setnumPav(int numeroPavimentos) {
	this -> numeroPavimentos = numeroPavimentos;
}

void Casa::setnumQuartos(int numeroQuartos) {
	this -> numeroQuartos = numeroQuartos;
}

void Casa::setAreaTerreno(double areaTerreno) {
	this -> areaTerreno = areaTerreno;
}

void Casa::setAreaConstruida(double areaConstruida) {
	this -> areaConstruida = areaConstruida;
}

int Casa::getnumPav() {
	return numeroPavimentos;
}

int Casa::getnumQuartos() {
	return numeroQuartos;
}

double Casa::getAreaTerreno() {
	return areaTerreno;
}

double Casa::getAreaConstruida() {
	return areaConstruida;
}

/*void Casa::toStringCasa() { ///imprime
	toStringImovel();
	cout << "Numero de pavimentos: " << numeroPavimentos << endl;
	cout << "Numero de quartos: " << numeroQuartos << endl;
	cout << "Area do terreno: " << areaTerreno << endl;
	cout << "Area construida: " << areaConstruida << endl;
	toStringEndereco();
}*/

void Casa::Exibir(){
    string categoria;
    if(tipoOferta==1){
        categoria = "A venda";
    }else if(tipoOferta==2){
        categoria = "Para alugar";
    }

    cout << "Titulo: " << tituloAnuncio << endl;
    cout << "Categoria: " << categoria << endl;
    cout << "Endereco: " << Endereco.toStringEndereco() << endl;
    cout << "Numero de pavimentos: " << numeroPavimentos << endl;
    cout << "Area do terreno: " << areaTerreno << "m²" << endl;
    cout << "Area construida: " << areaConstruida << "m²" << endl;
}

void Casa::Editar(){

     int opcao1, x=0;


        cout << "O que voce deseja mudar: " << endl;
        cout << "1.Titulo" << endl;
        cout << "2.Categoria" << endl;
        cout << "3.Preco" << endl;
        cout << "4.Endereco" << endl;
        cout << "5.Numero de pavimentos" << endl;
        cout << "6.Area do terreno" << endl;
        cout << "7.Area construida" << endl;
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
            cin >> tipoOferta;
            this -> tipoOferta = tipoOferta;
            x=1;
        }else if(opcao1==3){
            double preco;
            cout << "Novo preco: " << endl;
            cin >> preco;
            this -> preco = preco;
            x=1;
        }else if(opcao1==4){
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

        }else if(opcao1==5){
            int numeroPavimentos;
            cout << "Quantidade de pavimentos: " << endl;
            cin >> numeroPavimentos;
            this -> numeroPavimentos = numeroPavimentos;
            x=1;
        }else if(opcao1==6){
            int areaTerreno;
            cout << "Nova Area: " << endl;
            cin >> areaTerreno;
            this -> areaTerreno = areaTerreno;
            x=1;
        }else if(opcao1==7){
            int areaConstruida;
            cout << "Nova Area: " << endl;
            cin >> areaConstruida;
            this -> areaConstruida = areaConstruida;
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
