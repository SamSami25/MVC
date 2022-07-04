#ifndef CONTROLADOR_H
#define CONTROLADOR_H

#include "estudiante.h"

class Controlador
{
private:
    Estudiante *modelo;
    void cargarInformacion();
    float promedio();
public:
    Controlador();
    string visualizar();
    void actualizaNota(int nota, float valor);
};

#endif // CONTROLADOR_H
