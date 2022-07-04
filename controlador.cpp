#include "controlador.h"

void Controlador::cargarInformacion()
{
    // Crear el objeto  "modelo"
    string nombre = "Ariel";
    this->modelo = new Estudiante(nombre);
    this->modelo->setNota1(5);
    this->modelo->setNota2(7);
    this->modelo->setNota3(9);
}

float Controlador::promedio()
{
    float p = (modelo->getNota1() + modelo->getNota2() + modelo->getNota3()) / 3;
    return p;
}

Controlador::Controlador()
{
    this->cargarInformacion();
}

string Controlador::visualizar()
{
    // Crear una cadena con los datos del estudiante (modelo)
    // Y concatenar con el valor del promedio de sus notas.
    string str = this->modelo->getDatos() + "Promedio: " +
            to_string(this->promedio()) + "\n\n";
    return str;
}

void Controlador::actualizaNota(int nota, float valor)
{
    switch (nota) {
    case 1:
        this->modelo->setNota1(valor);
        break;
    case 2:
        this->modelo->setNota2(valor);
        break;
    case 3:
        this->modelo->setNota3(valor);
        break;
    default:
        break;
    }
}




