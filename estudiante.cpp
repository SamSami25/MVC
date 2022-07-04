#include "estudiante.h"

float Estudiante::getNota1() const
{
    return nota1;
}

void Estudiante::setNota1(float value)
{
    nota1 = value;
}

float Estudiante::getNota2() const
{
    return nota2;
}

void Estudiante::setNota2(float value)
{
    nota2 = value;
}

float Estudiante::getNota3() const
{
    return nota3;
}

void Estudiante::setNota3(float value)
{
    nota3 = value;
}

string Estudiante::getNombre() const
{
    return nombre;
}

string Estudiante::getDatos()
{
    return "\nNombre: " + this->nombre + "\n" +
            "Nota 1: " + to_string(this->nota1) + "\n" +
            "Nota 2: " + to_string(this->nota2) + "\n" +
            "Nota 3: " + to_string(this->nota3) + "\n";
}

Estudiante::Estudiante()
{
    this->nombre = "";
    this->nota1 = 0;
    this->nota2 = 0;
    this->nota3 = 0;
}

Estudiante::Estudiante(string &nombre)
{
    this->nombre = nombre;
    this->nota1 = 0;
    this->nota2 = 0;
    this->nota3 = 0;
}
