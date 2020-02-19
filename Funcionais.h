#include "Imovel.h"

#include <vector>
#include <iostream>
#include <string>

using namespace std;

class Funcionais{
    private:
        vector <Imovel*> imoveis;
        vector <int> Indice(string t);

    public:
        Funcionais(vector <Imovel*> imoveis);
        void Remover();
        void Editar();
        void Cadastra(Imovel* imoveis);

        vector <Imovel*> getImovel();
        vector <Imovel*> Buscar();

};
