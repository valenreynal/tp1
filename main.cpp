#include <iostream>
#include <vector>
#include "Mecanico.h"
#include "Repuesto.h"
#include "Reparacion.h"
#include <iomanip>

using namespace std;
using std::vector;


int main()
{
    cout << fixed << setprecision (2); /// muestra los num. con dos decimales
    Mecanico mecanico1(" pepe ", 500000,4000);
    Mecanico mecanico2(" Mateo ",600000,2000);

   Reparacion rep1(&mecanico1, 8);
   rep1.masRepuestos(Repuesto("Direccion",200000,"Europa"));
   rep1.masRepuestos(Repuesto("Motor",1500000,"Nacional"));

   Reparacion rep2(&mecanico2,6);
   rep2.masRepuestos(Repuesto("aceite",20000,"Nacional"));
   rep2.masRepuestos(Repuesto("Motor",1300000,"America"));

   Reparacion rep3(&mecanico1,4);
   rep3.masRepuestos(Repuesto("bateria",300000,"Limitrofe"));

   vector<Reparacion> reparaciones= {rep1,rep2,rep3};

   float horasMecanico1=0;    ///sueldo del mecanico1
   for(const auto& rep : reparaciones)
   {
       if(rep.getMecanico()->getNombre()== mecanico1.getNombre() )
       {
           horasMecanico1+=rep.getHorasTrabajadas();
       }
   }
   cout<<"El sueldo de "<< " " << mecanico1.getNombre()<<" es: $ "<<mecanico1.calcularElSueldo(horasMecanico1)<<endl;

   ///sueldo mecanico2
   float horasMecanico2=0;
   for(const auto& rep : reparaciones) ///leo mi vector de reparaciones
   {
       if(rep.getMecanico()->getNombre()== mecanico2.getNombre() ) ///comparo a ver si coincide el nombre del mecanico2 con la reparacion realizada
       {
           horasMecanico2+=rep.getHorasTrabajadas(); ///voy acumulando la cantidad de horas trabajadas en todas sus reparaciones para saber el total
       }
   }
   cout<<"El sueldo de"<<mecanico2.getNombre()<<"es:$ "<<mecanico2.calcularElSueldo(horasMecanico2)<<endl;

  ///suma del costo de los repuestos
  float totalDeLosRepuestos=0; ///acumulador
  for(const auto& rep : reparaciones) ///leo mi vector de reparaciones
  {
      totalDeLosRepuestos+=rep.costoRepuestos(); ///sumo el total de todos los repuestos
  }
  cout << "el total de los repuestos es:$ "<<totalDeLosRepuestos<<endl;

  /// comparo cual fue la reparacion mas cara
  float costoMaximo=0; ///acumulador
  for(const auto& rep: reparaciones) ///leo mi vector de reparaciones
  {
      if(rep.costoFinal()>costoMaximo) ///comparo las reparaciones ingresadas para encontrar la mas cara
      {
          costoMaximo=rep.costoFinal(); ///una vez cumplido lo de arriba actualizo mi costo maximo
      }

  }
  cout<<"la reparacion mas cara que se hizo en el taller fue de:$ "<<costoMaximo<<endl;


    cout << fixed << setprecision (2);

    return 0;
}

