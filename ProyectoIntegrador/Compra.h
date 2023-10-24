// Miranda Isabel Rada Chau - A01285243 - Gael Arnulfo Ordaz Zamora - A01734114 - Jorge Alberto Garcia Jardon// A00837558
#define Compra_h
using namespace std;
#include "Fecha.h"
#include <string>
class Compra {
private:
  int IdProducto;
  double Costo;
  int Cantidad;
  double Subtotal;
  string dia;
  string mes;
  string year;

public:
  Fecha fecha;
  // constructor
  Compra();
  Compra(int idProducto, double Costo, int Cantidad, string dia, string mes,
         string year);

  // setters
  void SetIdProducto(int id) { IdProducto = id; }
  void SetCosto(double cos) { Costo = cos; }
  void SetCantidad(int can) { Cantidad = can; }

  void SetSubtotal(int Cantidad, double Costo) {
    Subtotal = (Costo * Cantidad);
  }

  void SetDia(string d) { dia = d; }
  void SetMes(string m) { mes = m; }
  void SetYear(string y) { year = y; }
  // getters
  int GetIdProducto() { return IdProducto; }
  double GetCosto() { return Costo; }
  int GetCantidad() { return Cantidad; }

  string GetDia() { return dia; }

  string GetMes() { return mes; }

  string GetYear() { return year; }

  double GetSubtotal() { return Subtotal; }
};
