#ifndef INVENTARIO_H
#define INVENTARIO_H
#include "producto.h"
#include <string>
#include <vector>
using std::string;
using namespace std;
using std::vector;

class Inventario
{
    private:
    vector <Producto> articulos;

    public:
    Inventario();
    Producto obtener_producto(int pos);
    void mostrar_inventario();
    void reducir_disponibilidad(int pos, int cant);
};
#endif