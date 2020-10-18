#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

class Empregado {

  public:
    double salarioHora;
    double quotaMensalVendas;


    double pagamentoMes(double horasTrabalhadas);

};

#endif