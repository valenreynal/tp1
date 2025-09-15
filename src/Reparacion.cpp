#include "Reparacion.h"

Reparacion::Reparacion(Mecanico* _mecanico, float _horasTrabajadas) ///constructor
{
   mecanic=_mecanico;
   horasTrabajadas=_horasTrabajadas;
}

Reparacion::~Reparacion()
{
    //dtor
}

void Reparacion::masRepuestos( const Repuesto& unRepuesto) ///le paso la direccion de repuesto para agregar otro repuesto mas
{
    repuestos.push_back(unRepuesto); ///agrego otro repuesto al final del vector
}

float Reparacion::getHorasTrabajadas () const  ///muestra horas trabajadas
{
    return horasTrabajadas;
}

float Reparacion::costoRepuestos() const
{
    float total=0;
    for(const auto &unRepuesto:repuestos )  ///pongo en auto mi variable para que se adapte a el contenido del vector "repuestos"
    {
        total+=unRepuesto.costoFinal() ; ///al total le agrego el repuesto y que lo muestre en el costo fianl
    }
    return total;
}

float Reparacion::costoFinal() const
{
     float total= this->costoRepuestos() + mecanic->getPrecio() * horasTrabajadas; ///al costo de los repuestos le sumo el precio x hora del mecanico y lo multiplico x las horas trabajadas
     total+=total*0.30; ///comision del 30%
     return total;
}
Mecanico* Reparacion::getMecanico() const  ///muestro el mecanico asociado a esa reparaciom
{
    return mecanic;
}

