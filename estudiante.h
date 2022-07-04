#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

#include <string>

using namespace std;

class Estudiante
{
private:
    string nombre;
    float nota1;
    float nota2;
    float nota3;
public:
    Estudiante();
    Estudiante(string &nombre);

    float getNota1() const;
    void setNota1(float value);
    float getNota2() const;
    void setNota2(float value);
    float getNota3() const;
    void setNota3(float value);
    string getNombre() const;
    string getDatos();
};


#endif // ESTUDIANTE_H
