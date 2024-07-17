#ifndef CARRITO_H
#define CARRITO_H
#include "producto.h"
#include "inventario.h"

class Carrito{

    private: 
        vector <Producto> lista2;
        float total;

    public: 
    void mostrar_carrito();
    void agregarProductoCarrito(Producto p1);
    float suma_total();

};
#endif