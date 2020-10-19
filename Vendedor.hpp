#ifndef VENDEDOR_H
#define VENDEDOR_H

#include <string>
#include "Empregado.hpp"

class Vendedor : public Empregado {

  public:
    Vendedor(std::string nome, double salarioHora, double quotaMensalVendas);
    void print(double horasTrabalhadas);

  private:
    double quotaMensalVendas;
    double quotaTotalAnual();

};

#endif