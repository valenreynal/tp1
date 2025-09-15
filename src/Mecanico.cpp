#include "Mecanico.h"
#include<string>
using namespace std;

Mecanico::Mecanico(std::string _nombre, int _sueldoBase , float _precio) ///constructor
{
   nombre = _nombre;
   sueldoBase = _sueldoBase;
   precio = _precio;
}

Mecanico::~Mecanico()
{
    //dtor
}


float Mecanico::calcularElSueldo( float horasTrabajadas) const
{
    return sueldoBase+(precio*horasTrabajadas); ///sumo al sueldo base el precio x hora establecido
}

std::string Mecanico::getNombre()const ///muestro el nombre
{
    return nombre;
}
float Mecanico::getPrecio() const ///muestro el precio
{
    return this->precio;
}


