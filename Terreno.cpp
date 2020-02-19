#include "Terreno.h"
#include "Endereco.h"
#include "Imovel.h"

#include <iostream>
#include <string>

Terreno::Terreno() {
	setTipoImovel(3); // Ver Imovel.h para ver especificações do parâmetro
};

Terreno::Terreno(double area){
    this -> area = area;
}

void Terreno::setTerreno() {
	cout << "Digite a area do terreno: "; cin >> area;
}

void Terreno::setArea(double Area) {
	area = Area;
}

double Terreno::getArea() {
	return area;
}

/*void Terreno::toStringTerreno() {
	toStringImovel();
	cout << "Area do terreno: " << area << endl;
	cout << "Descricao do terreno: " << descricaoTerreno << endl;
	toStringEndereco();
}*/
void Terreno::ExibirTerreno(){
    string categoria;
    if(tipoOferta==1){
        categoria = "A venda";
    }else if(tipoOferta==2){
        categoria = "Para alugar";
    }

    cout << "Titulo: " << tituloAnuncio << endl;
    cout << "Categoria: " << categoria << endl;
    cout << "Endereco: " << Endereco.toStringEndereco() << endl;
    cout << "Area do terreno: " << area << endl;
    cout << "Preco: " << preco << endl;
}

void Terreno::EditarTerreno(){

     int opcao1, x=0;

        cout << "O que voce deseja mudar: " << endl;
        cout << "1.Titulo" << endl;
        cout << "2.Categoria" << endl;
        cout << "3.Endereco" << endl;
        cout << "4.Area do terreno" << endl;
        cout << "5.Preco: " << endl;
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
                cout << "Nome da cidade: " << endl;
                cin.ignore();
                getline(cin, cidade);
                this -> Endereco.setCidade(cidade);
                x=1;
            }else{
                cout << "Opcao invalida" << endl;
                x=0;
            }
        }if(opcao1==4){
            double area;
            cout << "Novo area: " << endl;
            cin >> area;
            this -> area = area;
            x=1;
        }if(opcao1==5){
            double preco;
            cout << "Novo preco: " << endl;
            cin >> preco;
            this -> preco = preco;
            x=1;
        }else{
            cout << "Opcao invalida" << endl;
            x=0;
        }
        if(x==1){
            cout << "Imovel alterado com sucesso!" << endl;
        }else if(x==0){
            cout << "Imovel nao alterado!" << endl;
        }else{
            cout << "ERRO" << endl;
        }
}
