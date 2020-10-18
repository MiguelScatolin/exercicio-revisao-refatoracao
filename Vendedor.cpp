#include <string>
#include "Empregado.hpp"

class Vendedor : public Empregado {

  public:
    double quotaMensalVendas;

    Vendedor(std::string nome, double salarioHora, double quotaMensalVendas) : Empregado(nome, salarioHora), quotaMensalVendas(quotaMensalVendas) {}

    double quotaTotalAnual() {
      return quotaMensalVendas * 12;
    }

};
