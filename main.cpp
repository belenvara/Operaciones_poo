#include <iostream>
#include "suma.h"
#include "resta.h"

int main() {
// define objeto o instancia de la clase suma.
    suma s;
    s.cargar1();
    s.cargar2();
    s.operar();
    s.mostrarresultado();
    
   
    resta r;

    r.cargar1();
    r.cargar2();
    r.operar();
    r.mostrarresultado();

   return 0;

}
