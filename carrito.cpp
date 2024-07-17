#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include "carrito.h"
#include "producto.h"
#include "inventario.h"
using namespace std;

void Carrito::mostrar_carrito(){
    for (int i=0; i<lista2.size(); i++)
    {
        cout << lista2[i].get_id_producto() << "  ";
        cout << lista2[i].get_nombre_producto()<< "  ";
        cout << lista2[i].get_precio() << "  ";
        cout << lista2[i].get_disponibilidad() << "  " << endl;
    }
}

void Carrito::agregarProductoCarrito(Producto p1){
    lista2.push_back(p1);
}

float Carrito::suma_total(){
    float total = 0;
    for (int i=0; i<lista2.size(); i++)
    {
        total = total + (lista2[i].get_precio()*lista2[i].get_disponibilidad());
    }
    return total;
}