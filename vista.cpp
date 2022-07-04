#include "vista.h"

Vista::Vista()
{
    this->control = new Controlador();
}

void Vista::imprimir()
{
    cout << this->control->visualizar();
}

void Vista::actualizarNota1()
{
    int nota = 0;
    do{
        cout << "Ingrese la nota 1: ";
        cin >> nota;
    }while(nota < 0 || nota > 10);

    this->control->actualizaNota(1, nota);
}
