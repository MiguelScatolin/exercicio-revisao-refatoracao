#include "Vendedor.hpp"

Vendedor::Vendedor(std::string nome, double salarioHora, double quotaMensalVendas) : Empregado(nome, salarioHora), quotaMensalVendas(quotaMensalVendas) {}

double Vendedor::quotaTotalAnual() {
  return quotaMensalVendas * 12;
}

void Vendedor::print(double horasTrabalhadas) {
  Empregado::print(horasTrabalhadas);
  std::cout << "Quota vendas: " << quotaTotalAnual() << std::endl;
  std::cout << std::endl;
}