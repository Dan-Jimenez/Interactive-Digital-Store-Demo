#include <string>
#include <iostream>
#include "producto.h"
using namespace std; 

string Producto::get_id_producto(){
    return id;
}

string Producto::get_nombre_producto(){
    return nombre;
}

float Producto::get_precio(){
    return precio;
}

int Producto::get_disponibilidad(){
    return disponibilidad;
}

void Producto::set_id_producto(string s_id){
    id = s_id;
}

void Producto::set_nombre_producto(string s_nombre){
    nombre = s_nombre;
}

void Producto::set_precio(float s_precio){
    precio = s_precio;
}

void Producto::set_disponibilidad(int s_disponibilidad){
    disponibilidad = s_disponibilidad;
}

