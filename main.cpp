#include <iostream>
#include "vista.h"

using namespace std;

int main()
{
    cout << "-- EJEMPLO MVC --" << endl;

    Vista v;
    v.imprimir();
    v.actualizarNota1();
    v.imprimir();
    return 0;
}
