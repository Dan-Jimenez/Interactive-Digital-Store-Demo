#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include "inventario.h"
#include "producto.h"
using namespace std;

Inventario::Inventario(){
    ifstream archivo;
    archivo.open("inventario.csv");
    string linea;
    Producto p;
    while (getline(archivo, linea))
    {
        stringstream token(linea);
        string s_id;
        string s_nombre;
        string s_precio;
        string s_disponibilidad;
        getline(token, s_id, ',');
        getline(token, s_nombre, ',');
        getline(token, s_precio, ',');
        getline(token, s_disponibilidad, ',');
        float precio = stod(s_precio);
        int disponibilidad = stoi(s_disponibilidad);
        
        // Producto
        p.set_id_producto(s_id);
        p.set_nombre_producto(s_nombre);
        p.set_precio(precio);
        p.set_disponibilidad(disponibilidad);

        articulos.push_back(p);
    }
}

void Inventario::mostrar_inventario(){
    for (int i=0; i<articulos.size(); i++)
    {
        cout << i << "  " << articulos[i].get_id_producto() << "  " << articulos[i].get_nombre_producto() << "  " << articulos[i].get_precio() << "  " << articulos[i].get_disponibilidad()<< endl;
    }
}

Producto Inventario::obtener_producto(int pos){
    return articulos[pos];
}

void Inventario::reducir_disponibilidad(int pos, int cant){
    int nuevo_stock = articulos[pos].get_disponibilidad() - cant;
    articulos[pos].set_disponibilidad(nuevo_stock);
}


