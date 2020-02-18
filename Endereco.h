#include <string>

using namespace std;

class Endereco{
    private:
        int numero;
        string rua;
        string bairro;
        string cep;
        string cidade;

    public:
        Endereco();
        Endereco(int numero, string rua, string bairro, string cep, string cidade);
        void setEndereco();
        void setNumero(int numero);
        void setRua(string rua);
        void setBairro(string bairro);
        void setCep(string cep);
        void setCidade(string cidade);

        int getNumero();
        string getRua();
        string getBairro();
        string getCep();
        string getCidade();

        void toStringEndereco();
};
