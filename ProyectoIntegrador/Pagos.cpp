// Miranda Isabel Rada Chau - A01285243 - Gael Arnulfo Ordaz Zamora - A01734114 - Jorge Alberto Garcia Jardon// A00837558
#include "Pagos.h"
#include <fstream>
#include <iostream>
#include <string>

using namespace std;
Pagos::Pagos(){
};
Pagos::Pagos(string nom, string cuenta, string tarjeta, int total)
    : NombreResp(nom), numCuenta(cuenta),numTarjeta(tarjeta), TotalAPagar(total){};
void Pagos::Transferencia() {
  cout << "Ingrese su numero de cuenta. (Con 12 dígitos) " << endl;
  getline(cin, numCuenta);
  getline(cin, numCuenta);
  while (numCuenta.length()!=12){
    cout << "Numero de tarjeta invalido. " << endl;
    cout << "Ingrese su Numero de cuenta. (Con 12 dígitos)" << endl;
    getline(cin, numCuenta);
  };
  cout << "Ingrese el nombre del responsable de la cuenta. ";
  getline(cin, NombreResp);
  cout << "Ingrese el monto que se quiere transferir. ";
  cin >> TotalAPagar;
};
void Pagos::Tarjeta() {
  cout << "Ingrese su numero de tarjeta. (Con 16 dígitos)" << endl;
  getline(cin, numTarjeta);
  getline(cin, numTarjeta);
  while (numTarjeta.length()!=16){
    cout << "Numero de tarjeta invalido. " << endl;
    cout << "Ingrese su numero de tarjeta. (Con 16 dígitos)" << endl;
    getline(cin, numTarjeta);
  };
  cout << "Ingrese el nombre del responsable de la tarjeta. ";
  getline(cin, NombreResp);
  cout << "Ingrese el monto que va a pagar. ";
  cin >> TotalAPagar;
}
string Pagos::getNumCuenta(){
  return numCuenta;
};
void Pagos::setNumCuenta(string cuenta){
  numCuenta = cuenta; 
};
string Pagos::getNumTarjeta(){
  return numCuenta;
};
void Pagos::setNumTarjeta(string tarjeta){
  numTarjeta = tarjeta; 
};
string Pagos::getNombreResp(){
  return NombreResp;
};
void Pagos::setNombreResp(string nom){
  NombreResp = nom; 
};
int Pagos::getTotalAPagar(){
  return TotalAPagar;
};
void Pagos::setTotalAPagar(int total){
  TotalAPagar = total; 
};
void Pagos::DisplayTarjeta() {
  cout << "El cliente a nombre del pedido ya realizó el pago con su tarjeta. El monto de la transaccion fue de $" << TotalAPagar << endl;
}
void Pagos::DisplayTransferencia() {
  cout << "El cliente a nombre del pedido realizó el pago con su cuenta. El monto de la transaccion fue de $" << TotalAPagar << endl;
}
