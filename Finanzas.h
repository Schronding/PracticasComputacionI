//
// Created by Coron on 10/18/2021.
//

#ifndef PROYECTO_FINANZAS_H
#define PROYECTO_FINANZAS_H


class Finanzas {
public:
    void LlenarSobre();

private:
    vector<double, 1> envelopes;
    vector<char, 1> enve_names;
    char a, decision;
    double b, DineroTotal;
    int i = 0;
};


#endif //PROYECTO_FINANZAS_H
