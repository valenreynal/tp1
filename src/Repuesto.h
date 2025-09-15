#ifndef REPUESTO_H
#define REPUESTO_H
#include <string>

class Repuesto
{
    public: ///metodos
        Repuesto();
        virtual ~Repuesto();
        Repuesto(std::string, float, std::string);
        float costoFinal() const; /// uso const pq no puede modificar el costoBasico
        float getCostoBasico() const;
        std::string getPaisDeOrigen()const;

    protected:

    private: ///atributos
        std::string nombre;
        float costoBasico;
        std::string paisDeOrigen;
};

#endif // REPUESTO_H
