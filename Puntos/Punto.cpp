//
// Created by Coron on 10/15/2021.
//

#include <cmath>
//const double PI = 3.14159265; // Con hasthag define podemos crear constantes. No entiendo la diferencia de esto y
// const nombre_variable = valor.
#define PI 3.14159265
#include "Punto.h"

using namespace std;

// Con el uso de dos puntos podemos acceder al metodo de una clase
Punto2D::Punto2D() {
    a = 0;
    b = 0;
}

void Punto2D::SetPosicion(float x, float y){
    a = x;
    b = y;
}

void Punto2D::Trasladar(float temp1, float temp2) {
    a += temp1;
    b += temp2;
}
void Punto2D::RotarRespectoAlOrigen(float temp1){
    float c = a;
    // c = a; // Creo que aqui no es necesario igualar "c = a" ya que el orden hace que a asuma el valor despues de la operacion
    a = c *cos (temp1*PI/180) - b*sin(temp1*PI/180); // Por que en uno es una suma y en otro una resta?
    b = c *sin (temp1*PI/180) + b*cos(temp1*PI/180); // Que significa _Xx?
}

void Punto2D::Escalar(float temp1, float temp2){
    a *= temp1;
    b *= temp2;
}

float Punto2D::GetX() {
    return a; // Esto tambien podria ser conseguido mediante el uso de estructuras de datos
}

float Punto2D::GetY() {
    return b;
}
