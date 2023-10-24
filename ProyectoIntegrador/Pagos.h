// Miranda Isabel Rada Chau - A01285243 - Gael Arnulfo Ordaz Zamora - A01734114 - Jorge Alberto Garcia Jardon// A00837558
#pragma once
#include <iostream>
#include <string>
using namespace std;

class Pagos {
public:
  Pagos();
  Pagos(string, string,string, int);
  void Transferencia();
  void Tarjeta();
  string getNumCuenta();
  void setNumCuenta(string);
  string getNumTarjeta();
  void setNumTarjeta(string);
  string getNombreResp();
  void setNombreResp(string);
  int getTotalAPagar();
  void setTotalAPagar(int);
  void DisplayTarjeta();
  void DisplayTransferencia();

private:
  string NombreResp, numCuenta, numTarjeta;
  int TotalAPagar;
};