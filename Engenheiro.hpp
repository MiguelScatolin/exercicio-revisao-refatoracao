#ifndef ENGENHEIRO_H
#define ENGENHEIRO_H

#include <string>
#include "Empregado.hpp"

class Engenheiro : public Empregado {

  public:
    Engenheiro(std::string nome, double salarioHora, int projetos);
    void print(double horasTrabalhadas);

  private:
    int projetos;
};

#endif