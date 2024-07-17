#ifndef TIENDA_H
#define TIENDA_H
#include "producto.h"
#include "inventario.h"
#include "carrito.h"
#include <string>
#include <vector>

class Tienda
{
    private:
    Inventario catalogo;

    public:
    void proceso();
    void menu_principal();
    Producto producto_carrito(int pos);
    void mostrar_catalogo();
    void terminar_compra();
    void salir();
    void reducir_disponibilidad(int pos, int cant);

};

#endif