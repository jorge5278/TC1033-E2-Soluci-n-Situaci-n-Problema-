// Miranda Isabel Rada Chau - A01285243 - Gael Arnulfo Ordaz Zamora - A01734114 - Jorge Alberto Garcia Jardon// A00837558
using namespace std;
#include "Compra.h"
#include <string>
Compra::Compra() {
  IdProducto = 01;
  Costo = 20;
  Cantidad = 1;
  Subtotal = 20;
  dia = "1";
  mes = "01";
  year = "2020";
}
Compra::Compra(int id, double cos, int cant, string d, string m, string y) {
  IdProducto = id;
  Costo = cos;
  Cantidad = cant;
  dia = d;
  mes = m;
  year = y;
}