//
// Created by Coron on 10/15/2021.
//

#ifndef PUNTOS_PUNTO_H
#define PUNTOS_PUNTO_H

class Punto2D {
public:
    Punto2D();
    float GetX();
    float GetY();
    void Trasladar(float x, float y); // Los parametros tambien deben declarar su tipo
    void SetPosicion(float x, float y);
    void RotarRespectoAlOrigen(float temp1); // Que interesante, a pesar de que el scope de mis variables es "global"
    // igual mi clase no reconoce las variables declaradas.
    void Escalar(float temp1, float temp2); // Aunque ya hayamos declarado la variable esta solo esta presente en los parametros de la misma funcion
// Ya que mi programa solo hace una operacion a la vez puede ser util dejar la variable de forma global.

private:
    float a,b; // Por que el uso de estas variables?
};


#endif //PUNTOS_PUNTO_H
