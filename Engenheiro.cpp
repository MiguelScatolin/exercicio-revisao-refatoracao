#include <string>
#include "Empregado.hpp"
#include "Engenheiro.hpp"

Engenheiro::Engenheiro(std::string nome, double salarioHora, int projetos) : Empregado(nome, salarioHora), projetos(projetos) {}

void Engenheiro::print(double horasTrabalhadas) {
  Empregado::print(horasTrabalhadas);
  std::cout << "Projetos: " << projetos << std::endl;
  std::cout << std::endl;
}