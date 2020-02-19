#include "Funcionais.h"
#include "Imovel.h"

#include <string>
#include <iostream>

void Funcionais::Cadastra(Imovel* imoveis){
    this->imoveis.push_back(imoveis);
}

Funcionais::Funcionais(vector <Imovel*> imoveis){
    this -> imoveis = imoveis;
}

vector <Imovel*> Funcionais::getImovel(){
    return this -> imoveis;
}

vector <int> Funcionais::Indice(string t)
{
    int i = 0;
    vector <int> num;
    for(i = 0; i < imoveis.size(); i++){
        if(buscaContida(t,imoveis[i] -> getTitulo()) == true){
            num.push_back(i);
        }
    }
        return num;
}

vector <Imovel*> Funcionais::Buscar(){

    int opcao1;
    vector <Imovel*> indices;

    cout << "Selecione a opcao desejada: " << endl;
    cout << "1. Por titulo" << endl;
    cout << "2. Por bairro" << endl;
    cout << "3. Por cidade" << endl;
    cout << "4. Por valor" << endl;
    cin >> opcao1;

    if(opcao1==1){

        unsigned int i;
        string Titulo;

        cout << "Digite o Titulo:" << endl;
        cin.ignore();
        getline(cin, Titulo);
        for(i [=0; i<imoveis.size(); i++){
            if(buscaContida(Titulo, imoveis[i] -> getEndereco().getTitulo()) == true){
                indices.push_back(imoveis[i]);
            }
        }
    }
    if(opcao1==2){
        unsigned int i;
        string Bairro;

        cout << "Digite a Bairro: " << endl;
        cin.ignore();
        getline(cin, Bairro);
        for(i=0; i<imoveis.size(); i++){
            if(buscaContida(Bairro, imoveis[i] -> getEndereco().getBairro()) == true){
                indices.push_back(imoveis[i]);
            }
        }
    }
    if(opcao1==3){
        unsigned int i;
        string Cidade;

        cout << "Digite o Cidade: " << endl;
        cin.ignore();
        getline(cin, Cidade);
        for(i=0; i<imoveis.size(); i++){
            if(buscaContida(Cidade, imoveis[i] -> getCidade()) == true){
                indices.push_back(imoveis[i]);
            }
        }
    }
    if(opcao1==4){
        unsigned int i;
        double valor;
        int opcao2;

        cout << "Acima ou abaixo de um valor? " << endl;
        cout << "1. Acima" << endl;
        cout << "2. Abaixo" << endl;
        cin >> opcao2;

        if(opcao2==1){

            cout << "Digite o valor: " << endl;
            cin >> valor;
            for(i = 0; i < imoveis.size(); i++){
                if((imoveis[i]->getValor()) >= valor){
                    indices.push_back(imoveis[i]);
                }
            }
        }
        if(opcao2==2){

            cout << "Digite o valor:\n" << endl;
            cin >> valor;
            for(i = 0; i < imoveis.size(); i++){
                if((imoveis[i]->getValor()) <= valor){
                    indices.push_back(imoveis[i]);
                }
            }
        }
    }else{
        cout << "Opcao Invalida!" << endl;
    }
    return indices;
}

void Funcionais::Remover()
{
    vector <Imovel*> Imoveis;
    int indice, TipoImovel;;
    unsigned int i;
    vector <int> aux;
    Imoveis = Buscar();

    for(i = 0; i < imoveis01.size(); i++){

        cout << "Selecione o tipo de imovel que deseja remover: " << endl;
        cout << "1. Casa" << endl;
        cout << "2. Apartamento" << endl;
        cout << "3. Terreno" << endl;
        cin >> TipoImovel;

        if(TipoImovel==1){
        cout << "Imovel: " << endl;
        Imoveis[i] -> ExibirCasa();
        }if(TipoImovel==2){
        cout << "Imovel: " << endl;
        Imoveis[i] -> ExibirApartamento();
        }if(TipoImovel==3){
        cout << "Imovel: " << endl;
        Imoveis[i] -> ExibirTerreno();
        }
    }
    cout << "Digite o indice para remover" << endl;
    cin >> indice;

    aux = BuscarIndice(imoveis01[indice-1] -> getTitulo());

    if(aux.size()!=0){
        imoveis.erase(imoveis.begin() + aux[indice-1]);
        cout << "Imovel Deletado" << endl;
    }else{
        cout << "ERRO!" << endl;
    }
}
void Funcionais::Editar(){

    vector <Imovel*> Imoveis;
    int indice;
    unsigned int j;
    vector <int> aux;
    Imoveis = Buscar();
    int TipoImovel;

        cout << "Deseja editar que tipo de imovel?" << endl;
        cout << "1. Casa" << endl;
        cout << "2. Apartamento" << endl;
        cout << "3. Terreno" << endl;
        cin >> TipoImovel;

        if(TipoImovel==1){
           for(j=0; j<imoveis.size(); j++){
            imoveis[j]->ExibirCasa();
            cout << "\n" << endl;
           }
        }else if(TipoImovel==2){
           for(j=0; j<imoveis.size(); j++){
            imoveis[j]->ExibirApartamento();
            cout << "\n" << endl;
           }
        }else if(TipoImovel==3){
           for(j=0; j<imoveis.size(); j++){
            imoveis[j]->ExibirTerreno();
            cout << "\n" << endl;
           }
        }

    if(i>1){
        cout << "Digite o indice do imovel que deseja modificar: " << endl;
        cin >> indice;
    }else if(i==1){
        indice=1;
    }


    aux = BuscarIndice(Imoveis[indice-1] -> getTitulo());

    if(TipoImovel==1){
        if(aux.size()!=0){
            imoveis[aux[indice - 1]]->EditarCasa();
            cout << "Modificacao realizada com sucesso!" << endl;
        }else{
            cout << "ERRO" << endl;
    }else if(TipoImovel==2){
        if(aux.size()!=0){
            imoveis[aux[indice - 1]]->EditarApartamento();
            cout << "Modificacao realizada com sucesso!" << endl;
        }else{
            cout << "ERRO" << endl;
    }else if(TipoImovel==3){
        if(aux.size()!=0){
            imoveis[aux[indice - 1]]->EditarTerreno();
            cout << "Modificacao realizada com sucesso!" << endl;
        }else{
            cout << "ERRO" << endl;
    }
}
