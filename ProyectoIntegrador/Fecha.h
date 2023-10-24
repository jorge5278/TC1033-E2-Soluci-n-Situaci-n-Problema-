// Miranda Isabel Rada Chau - A01285243 - Gael Arnulfo Ordaz Zamora - A01734114 - Jorge Alberto Garcia Jardon// A00837558
#define Fecha_h
using namespace std;
#include <string>
class Fecha {
private:
  string dia;
  string mes;
  string year;

public:
  Fecha();
  Fecha(string dia, string mes, string year);

  // setters
  void setDia(string d) { dia = d; }
  void setMes(string m) { mes = m; }
  void setYear(string y) { year = y; }

  // getters
  string getDia() { return dia; }

  string getMes() { return mes; }

  string getYear() { return year; }
};
