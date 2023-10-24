// Miranda Isabel Rada Chau - A01285243 - Gael Arnulfo Ordaz Zamora - A01734114 - Jorge Alberto Garcia Jardon// A00837558
#include "Cliente.h"
#include <iostream>
#include <string>

using namespace std;
Cliente::Cliente(){

};
Cliente::Cliente(string nom, string dir, string corr, string tel)
    : nombre(nom), direccion(dir), correo(corr), telefono(tel){};
string Cliente::getNombre() { return nombre; };
void Cliente::setNombre(string nom) { nombre = nom; };
string Cliente::getDireccion() { return direccion; };
void Cliente::setDireccion(string dir) { direccion = dir; };
string Cliente::getCorreo() { return correo; };
void Cliente::setCorreo(string corr) { correo = corr; };
string Cliente::getContacto() { return telefono; };
void Cliente::setContacto(string tel) { telefono = tel; };

void Cliente::imprimeDatos() {
  cout << "El nombre del cliente es: " << nombre << endl;
  cout << "La direccion del cliente es: " << direccion << endl;
  cout << "El correo para contactar al cliente es: " << correo << endl;
  cout << "El telefono del cliente es: " << telefono << endl;
};