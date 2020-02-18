#include "Endereco.h"
#include <string>

using namespace std;

class Imovel {
    protected:
        int tipoImovel; /// 1--> Casa; 2--> Apartamento; 3--> Terrreno;
        int tipoOferta; /// 1--> Venda; 2--> Aluguel
        string tituloAnuncio;
        double preco;
        Endereco endereco;

    public:
        Imovel();
        Imovel(int tipoImovel);
        void setTipoImovel(int tipo_imovel);
        void setTipoOferta(int tipo_DeOferta);
        void setTituloAnuncio(string titulo_anuncio);
        void setPreco(double PRECO);

        int getTipoImovel();
        int getTipoOferta();
        string getTituloAnuncio();
        double getPreco();

        Endereco getEndereco();

        void toStringImovel();
};
