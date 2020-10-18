#include "Empregado.hpp"

const int HORAS_PADRAO = 8;

double Empregado::pagamentoMes(double horasTrabalhadas)
{

  double t = horasTrabalhadas;

  //Cálculo de hora extra (+50% se horasTrabalhadas > 8)
  if (horasTrabalhadas > HORAS_PADRAO)
  {
    double x = horasTrabalhadas - HORAS_PADRAO;
    t += x / 2;
  }
  return t * salarioHora;
}


Empregado::Empregado(std::string nome, double salarioHora) : nome(nome), salarioHora(salarioHora) {}