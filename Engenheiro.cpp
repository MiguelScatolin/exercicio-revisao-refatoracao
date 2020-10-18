#include <string>
#include "Empregado.hpp"

class Engenheiro : public Empregado {

  public:
    int projetos;

    Engenheiro(std::string nome, double salarioHora, int projetos) : Empregado(nome, salarioHora), projetos(projetos) {}
};
