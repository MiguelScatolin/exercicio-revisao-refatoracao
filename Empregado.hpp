#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

class Empregado {

  public:
    double salarioHora;
    std::string nome;

    Empregado(std::string nome, double salarioHora);
    double pagamentoMes(double horasTrabalhadas);

};

#endif