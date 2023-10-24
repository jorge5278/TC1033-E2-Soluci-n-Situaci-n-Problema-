// Miranda Isabel Rada Chau - A01285243 - Gael Arnulfo Ordaz Zamora - A01734114 - Jorge Alberto Garcia Jardon// A00837558
#include "Cliente.h"
#include "Compra.h"
#include "Pagos.h"
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int CreateCompra(Compra compraList[], int &sizeCompra, int id, double cos,
                 int cant, string dia, string mes, string year) {
  int i;
  double sub;
  i = sizeCompra;
  cout << i;
  compraList[i].SetIdProducto(id);
  compraList[i].SetCosto(cos);
  compraList[i].SetCantidad(cant);
  compraList[i].SetSubtotal(cant, cos);
  compraList[i].SetDia(dia);
  compraList[i].SetMes(mes);
  compraList[i].SetYear(year);
  sub = compraList[i].GetSubtotal();
  cout << "\nArticulo creado correctamente." << endl;
  cout << id << " - " << cos << " - " << cant << " - " << dia << "/" << mes
       << "/" << year << " - El subtotal de la compra es: $" << sub << endl;
  sizeCompra++;
  return 0;
}
void PrintCompra(Compra compraList[], int &sizeCompra) {
  int id;
  double cos;
  int cant;
  double sub;
  string dia;
  string mes;
  string year;
  double total = 0;
  for (int i = 0; i < sizeCompra; i++) {
    id = compraList[i].GetIdProducto();
    cos = compraList[i].GetCosto();
    cant = compraList[i].GetCantidad();
    sub = compraList[i].GetSubtotal();
    dia = compraList[i].GetDia();
    mes = compraList[i].GetMes();
    year = compraList[i].GetYear();
    total = total + sub;

    cout << id << " - " << cos << " - " << cant << " - " << dia << "/" << mes
         << "/" << year << " - " << " El subtotal es de: $" << sub << endl;
  }
  cout << "El total a pagar es de: $" << total << endl;
}

int main() {
  int sizeCompra;
  Compra compraList[29];
  string opc;
  int pago;
  int id;
  double cos;
  int cant;
  string dia;
  string mes;
  string year;
  double sub, total;
  string nom, dir, corr;
  string tel;
  Cliente cl1;
  cout << "Ingresa tu nombre. ";
  getline(cin, nom);
  cout << "Ingresa tu dirección. ";
  getline(cin, dir);
  cout << "Ingresa tu correo electrónico(Sin espacios). ";
  getline(cin, corr);
  cout << "Ingresa tu número de telefono. ";
  getline(cin, tel);
  while (tel.length()!=10){
    cout << "Numero de telefono invalido. " << endl;
    cout << "Ingresa tu número de telefono. ";
    getline(cin, tel);
  };
  cl1.setNombre(nom);
  cl1.setDireccion(dir);
  cl1.setCorreo(corr);
  cl1.setContacto(tel);

  do {
    cout << "" << endl;
    cout << "///----Menu----///" << endl;
    cout << "Selecciona una opcion\n(1)Agregar un producto\n(2)Agregar una forma de "
            "pago\n(3)Desplegar el total con comprobante.\n(0)-Salir."
         << endl;
    cin >> opc;

    if (opc == "0") {
      cout << "Muchas gracias por su compra...." << endl;
    }

    if (opc == "1") {
      cout << "Agrega la informacion de el producto en este orden:\nid: Costo: "
              "Cantidad:  Dia: Mes: Año: "
           << endl;
      cin >> id >> cos >> cant >> dia >> mes >> year;
      while ((stoi(dia)<1) || (stoi(dia) > 31)||(stoi(mes)<1)||(stoi(mes)>12)){
        cout << "Fecha Invalida. Favor de volver a ingresar los datos del producto. " << endl;
        cout << "Agrega la informacion de el producto en este orden:\nid: Costo: "
              "Cantidad:  Dia: Mes: Año: "
           << endl;
      cin >> id >> cos >> cant >> dia >> mes >> year;  
      };
      CreateCompra(compraList, sizeCompra, id, cos, cant, dia, mes, year);
    }

    if (opc == "2") {
      cout << "Gusta pagar con Tarjeta(1) o Transferencia(2)?" << endl;
      cin >> pago;
      if (pago == 1)
      
        Pagos().Tarjeta();
      if (pago == 2)
        Pagos().Transferencia();
    }

    if (opc == "3") {
      cl1.imprimeDatos();
      cout << "" << endl;
      PrintCompra(compraList, sizeCompra);
      if (pago == 1)
        Pagos().DisplayTarjeta();
      if (pago == 2)
        Pagos().DisplayTransferencia();
    }

  } while (opc != "0");

  return 0;
}