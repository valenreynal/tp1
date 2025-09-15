#ifndef REPARACION_H
#define REPARACION_H
#include "Mecanico.h"
#include "Repuesto.h"
#include<vector>


class Reparacion
{
    public: ///metodos
        Reparacion();
        virtual ~Reparacion();
        Reparacion(Mecanico*, float);
        void masRepuestos(const Repuesto&);
        float getHorasTrabajadas()const;
        float costoRepuestos()const;
        float costoFinal() const;
        Mecanico* getMecanico() const;

    protected:

    private: ///atributos
         Mecanico* mecanic;
         float horasTrabajadas;
         vector<Repuesto> repuestos;
};

#endif // REPARACION_H
