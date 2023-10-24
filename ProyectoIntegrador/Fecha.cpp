// Miranda Isabel Rada Chau - A01285243 - Gael Arnulfo Ordaz Zamora - A01734114 - Jorge Alberto Garcia Jardon// A00837558
using namespace std;
#include "Fecha.h"
#include <string>
Fecha::Fecha() {
  dia = "";
  mes = "";
  year = "";
}

Fecha::Fecha(string dia, string mes, string year) {
  setDia(dia);
  setMes(mes);
  setYear(year);
}