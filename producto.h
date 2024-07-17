#ifndef PRODUCTO_H
#define PRODUCTO_H
#include <string>
using std::string;

class Producto
{
    private:
    string id;
    string nombre;
    float precio;
    int disponibilidad;

    public:
    string get_id_producto();
    string get_nombre_producto();
    float get_precio();
    int get_disponibilidad();
    void set_id_producto(string s_id);
    void set_nombre_producto(string s_nombre);
    void set_precio(float s_precio);
    void set_disponibilidad(int s_disponibilidad);
};
#endif