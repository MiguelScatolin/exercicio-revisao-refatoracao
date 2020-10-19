#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

class Empregado {

  protected:
    Empregado(std::string nome, double salarioHora);
    void print(double horasTrabalhadas);

  private:
    double salarioHora;
    std::string nome;
    double pagamentoMes(double horasTrabalhadas);
    void printNome();
    void printSalarioMes(double horasTrabalhadas);

};

#endif