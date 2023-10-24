// Miranda Isabel Rada Chau - A01285243 - Gael Arnulfo Ordaz Zamora - A01734114 - Jorge Alberto Garcia Jardon// A00837558
#pragma once
#include <iostream>
#include <string>
using namespace std;

class Cliente {
public:
  Cliente();
  Cliente(string, string, string, string);
  string getNombre();
  void setNombre(string);
  string getDireccion();
  void setDireccion(string);
  string getCorreo();
  void setCorreo(string);
  string getContacto();
  void setContacto(string);
  void imprimeDatos();

private:
  string nombre, direccion, correo, telefono;
  
};