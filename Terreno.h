#include "Imovel.h"

class Terreno : public Imovel{
    private:
        double area;

    public:
        Terreno();
        Terreno(double area);

        void setTerreno();
        void setArea(double Area);

        double getArea();

        /// void toStringTerreno();

        void ExibirTerreno();

        void EditarTerreno();

};
