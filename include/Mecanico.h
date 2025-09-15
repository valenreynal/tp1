#ifndef MECANICO_H
#define MECANICO_H
#include<string>
using namespace std;


class Mecanico
{
    public:   /// metodos
        Mecanico();
        virtual ~Mecanico();
        float calcularElSueldo(float horasTrabajadas)const;
        Mecanico (std::string , int , float );
        std::string getNombre() const;
        float getPrecio() const;

    protected:

    private: ///atributos
        std::string nombre;
        int sueldoBase;
        float precio;
};

#endif // MECANICO_H
