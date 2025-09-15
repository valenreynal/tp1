#include "Repuesto.h"
#include<string>
using namespace std;

Repuesto::Repuesto(std::string _nombre, float _costoBasico, std::string _paisDeOrigen) ///CONSTRUCTOR
{
    nombre=_nombre;
    costoBasico= _costoBasico;
    paisDeOrigen=_paisDeOrigen;
}

Repuesto::~Repuesto()
{
    //dtor
}

float costoFinal () const{
float recargo=0;

 if( paisDeOrigen=="Nacional")
         {
        recargo=0.1; /// si es nacional

 }else if( paisDeOrigen=="pais Limitrofe")
         {

        recargo=0.18; ///si es de un pais limitrofe

 }else if( paisDeOrigen=="Europa")
         {
        recargo=0.28;    ///si es de Europa

 }else if( paisDeOrigen=="America")
         {
        recargo=0.25;    ///si es de America
    }

   return costoBasico * (1+recargo);
}
  float Repuesto::getCostoBasico() const  ///muestro el costo basico
  {
      return costoBasico;
  }

  std::string Repuesto::getPaisDeOrgen() const ///muestro el pais de origen seleccionado
  {
      return paisDeOrigen;
  }

