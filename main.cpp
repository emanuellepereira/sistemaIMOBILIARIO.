#include "Casa.h"
#include "Apartamento.h"
#include "Terreno.h"
#include "Funcionais.h"

#include <iostream>
#include <vector>
#include <string>
#include <stdlib.h>


using namespace std;
int main(){

    system("color F0");

    int i;
    vector <Imovel*> imoveis;

    imoveis = b1.lerArquivo();

    Funcionais s1(imoveis);

    cout << "Bem vindo ao APCARTER!" << endl;
    cout << "Selecione a opcao desejada:" << endl;
    cout << "\t1. Cadastrar Imovel" << endl;
    cout << "\t2. Listar Imoveis" << endl;
    cout << "\t3. Buscar" << endl;
    cout << "\t4. Remover Imovel" << endl;
    cout << "\t5. Editar Imovel" << endl;
    cout << "\t6. Salvar" << endl;

    cin >> i;
    system("cls");

        if(i==1){///cadastro de imovel
            Imovel *imovel01;
            string Rua, Bairro, Cidade, Cep, Titulo;
            double valor;
            int TipoOferta, TipoImovel;
            int Numero, x;

            cout << "Digite o Titulo: " << endl;
            getline(cin, Titulo);

            system("cls");

            cout << "Escolha o tipo do imovel: " << endl;
            cout << "1. Casa " << endl;
            cout << "2. Apartamento " << endl;
            cout << "3. Terreno " << endl;
            cin >> TipoImovel;

            system("cls");

            if(TipoImovel==1){
                int numPavimentos, numQuartos; double areaTerreno, areaConstruida;
                cout << "Pavimentos da casa: " << endl;
                cin >> numPavimentos;

                cout << "Quartos: " << endl;
                cin >>numQuartos;

                cout << "Area do terreno: " << endl;
                cin >> areaTerreno;

                cout << "Area construida desse terreno: " << endl;
                cin >> areaConstruida;

                x=1;

                system("cls");

            }else if(TipoImovel==2){
                string posicao; int numQuartos, vagasGaragem; double valorCondominio, area;

                cout << "Posicao em relacao ao sol: " << endl;
                cin.ignore();
                getline(cin, posicao);

                cout << "Quantidade de quartos: " << endl;
                cin >> numQuartos;

                cout << "Valor do Condominio: " << endl;
                cin >> valorCondominio;

                cout << "Vagas na garagem: " << endl;
                cin >> vagasGaragem;

                cout << "Area do imovel: " << endl;
                cin >> area;

                x=2;

                system("cls");

            }else if (TipoImovel==3){
                double area;

                cout << "Area do terreno: " << endl;
                cin >> area;

                x=3;

                system("cls");

            }else{
                cout << "OPCAO INVALIDA!" << endl;
            }

            system("cls");

            cout << "Escolha o tipo de oferta: " << endl;
            cout << "1. Vender" << endl;
            cout << "2. Alugar" << endl;
            cin >> TipoOferta;

            system("cls");

            cout << "Preencha as informacoes do endereco do imovel:" << endl;

            cout << "Nome da rua: " << endl;
            cin.ignore();
            getline(cin, Rua);

            cout << "Numero: " << endl;
            cin >> Numero;

            cout << "Nome do bairro: " << endl;
            cin.ignore();

            getline(cin, bairro);
            cout << "Nome da cidade: " << endl;

            getline(cin, cidade);
            cout << "Cep:\n" << endl;
            getline(cin, cep);

            Endereco E1(logradouro, num1, bairro, cidade, cep);

            system("cls");

            cout << "Digite o valor " << endl;
            cin >> valor;

            if(x==1){
                imovel01 = new Casa(titulo, E1, valor, AluguelOuVenda, tipoDeImovel, numPavimentos, numQuartos, areaTerreno, areaConstruida), s1.cadastraImovel(I1);

                cout << "Cadastrado com sucesso!" << endl;

                system("cls");

            }else if(x==2){
                imovel01 = new Apartamento(titulo, E1, valor, AluguelOuVenda, tipoDeImovel, posicao, numQuartos,valorCondominio, vagasGaragem, area);

                s1.cadastraImovel(I1);

                cout << "Cadastrado com sucesso!" << endl;

                system("cls");

            } else if(x==3){
                imovel01 = new Terreno(titulo, E1, valor, AluguelOuVenda, tipoDeImovel, area);

                s1.cadastraImovel(I1);

                cout << "Cadastrado com sucesso! " << endl;

                system("cls");

            }
        }
        if(i==2){///listagem de imovel
            unsigned int j;
            int TipoImovel;

            cout << "Deseja listar que tipo de imovel?" << endl;
            cout << "1. Casa" << endl;
            cout << "2. Apartamento" << endl;
            cout << "3. Terreno" << endl;
            cout << "4. Listagem completa" << endl;
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
            }else if(TipoImovel==4){
               for(j=0; j<imoveis.size(); j++){
                imoveis[j]->ExibirCasa();
                cout << "\n" << endl;
               }
                for(j=0; j<imoveis.size(); j++){
                imoveis[j]->ExibirApartamento();
                cout << "\n" << endl;
               }
               for(j=0; j<imoveis.size(); j++){
                imoveis[j]->ExibirTerreno();
                cout << "\n" << endl;
               }
            }
        }
        if(i==3){///busca

            system("cls");
            imoveis = s1.Buscar();
            unsigned int contador;
            int TipoImovel;

            cout << "Deseja buscar que tipo de imovel?" << endl;
            cout << "1. Casa" << endl;
            cout << "2. Apartamento" << endl;
            cout << "3. Terreno" << endl;
            cout << "4. Listagem completa" << endl;
            cin >> TipoImovel;

            if(TipoImovel==1){
                   for(contador=0; contador<imoveis.size(); contador ++){
                    imoveis[contador] -> ExibirCasa();
                    cout << "\n" << endl;
                    system("cls");
                    }
            }else if(TipoImovel==2){
                   for(contador=0; contador<imoveis.size(); contador ++){
                    imoveis[contador] -> ExibirApartamento();
                    cout << "\n" << endl;
                    system("cls");
                    }
            }else if(TipoImovel==3){
                 for(contador=0; contador<imoveis.size(); contador ++){
                    imoveis[contador] -> ExibirTerreno();
                    cout << "\n" << endl;
                    system("cls");
                 }
            }else if(TipoImovel==4){
               for(contador=0; contador<imoveis.size(); contador ++){
                    imoveis[contador] -> ExibirCasa();
                    cout << "\n" << endl;
                    system("cls");
                    }
                for(contador=0; contador<imoveis.size(); contador ++){
                    imoveis[contador] -> ExibirApartamento();
                    cout << "\n" << endl;
                    system("cls");
                }
                for(contador=0; contador<imoveis.size(); contador ++){
                    imoveis[contador] -> ExibirTerreno();
                    cout << "\n" << endl;
                    system("cls");
                }
            }
        }
        if(i==4){///remocao
            system("cls");
            s1.removerImovel();
        }
        if(i==5){///edicao
            system("cls");
            s1.editarImovel();
        }
        if(i==6){///salvar arquivo

        }
    }
    system("pause");
    return 0;
}
