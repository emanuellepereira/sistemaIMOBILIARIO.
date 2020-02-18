#include "Imovel.h"

class Apartamento : public Imovel{
    private:
        int numeroQuartos;
        int numeroVagas;
        double area;
        double valorCondominio;
        string posicao;
    public:
        Apartamento();
        Apartamento(int numeroQuartos,  int numeroVagas, double area, double valorCondominio, string posicao);
        void setApartamento();
        void setnumQuartos(int numeroQuartos);
        void setnumVagas(int numeroVagas);
        void setArea(double area);
        void setValorCondominio(double valorCondominio);
        void setPosicao(string posicao);

        int getnumQuartos();
        int getnumVagas();
        double getArea();
        double getValorCondominio();
        string getPosicao();

       // void toStringApartamento();

       void ExibirApartamento();

       void EditarApartamento();
};
