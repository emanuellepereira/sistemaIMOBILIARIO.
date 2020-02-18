#include "Imovel.h"

class Casa : public Imovel{
    private:
        int numeroPavimentos;
        int numeroQuartos;
        double areaTerreno;
        double areaConstruida;

    public:
        Casa();
        Casa(int numeroPavimentos, int numeroQuartos, double areaTerreno, double areaConstruida);
        void setCasa(); // A função setCasa seta APENAS os atributos de Casa de uma só vez
        void setnumPav(int numeroPavimentos);
        void setnumQuartos(int numeroQuartos);
        void setAreaTerreno(double areaTerreno);
        void setAreaConstruida(double areaConstruida);

        int getnumPav();
        int getnumQuartos();
        double getAreaTerreno();
        double getAreaConstruida();

       // void toStringCasa();

        void ExibirCasa();

        void EditarCasa();

};
